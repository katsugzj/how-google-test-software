#include "addurl/addurl.pb.h"
#include "addurl/addurl_frontend.h"

#include "path/to/googletest.h"


//fake一个AddUrlService对象，包装所有的方法（不关注实现，只关注输入输出），从而隔离被fake的对象的修改引入的问题
class FakeAddUrlService : public AddUrlService{
    
    public:
    FakeAddUrlService(/* args */) : has_request_expections_(false),error_code_(0);
    void set_expected_url(const string& url){
        expected_url_ = url;
        has_request_expectations_ = true;
    }
    void set_expected_comment(const string& comment){
        expected_comment_ = comment;
        has_request_expectations_ = true;
    }
    void set_error_code(int error_code){
        error_code_ = error_code;
    }
    void set_error_details(const string& error_details){
        error_details_ = error_details;
    }
    virtual void AddUrl(RPC* rpc, const AddUrlRequest* request, AddUrlReply* reply){
        if(has_request_expectations_){
            EXCEPT_EQ(expected_url_,request->url());
            EXCEPT_EQ(expected_comment_,request->comment());
        }
        if(error_code_ != 0 || !error_details.empty()){
            reply->set_error_code(error_code_);
            reply->set_error_details(error_details_);
        }
    }

    private:
    string expected_url_;
    string expected_comment_;
    bool has_request_expectations_;

    int error_code_;
    string error_details_;

};

class AddurlFrontendTest : public ::testing::Test{
    protected:
    virtual void SetUp(){
        fake_add_url_service_.reset(new FakeAddUrlService);
        add_url_frontend_.reset(new AddUrlFrontend(fake_add_url_service_.get()));
    }
    scopted_ptr<FakeAddUrlService> fake_add_url_service_;
    scopted_ptr<AddUrlFrontend> add_url_frontend_;
};

//所有的测试都是测试的AddUrlFrontend::HandleAddUrlFrontendRequest这个函数的输入和输出是否正确，属于单元测试
//TEST_F函数第一个参数是继承自::testing::Test的类，用于执行setup和teardown操作，相当于对于同样的前置后置条件进行统一配置。第二个参数就是用例名称
TEST_F(AddurlFrontendTest, ParesesUrlCorrectly){
    HTTPRequest http_request;
    HTTPReply http_reply;

    http_request.set_text("GET /addurl?url=http://www.xxx.com HTTP/1.1\r\n\r\n");

    fake_add_url_service_->set_expected_url("http://www.xxx.com");

    add_url_frontend_->HandleAddUrlFrontendRequest(&http_request, &http_reply);

    EXPECT_STREQ("200 OK", http_reply.text());
}

TEST_F(AddurlFrontendTest, ParesesCommentCorrectly)
{
    HTTPRequest http_request;
    HTTPReply http_reply;

    http_request.set_text("GET /addurl?url=http://www.xxx.com&comment=Test+comment HTTP/1.1\r\n\r\n");

    fake_add_url_service_->set_expected_url("http://www.xxx.com");

    add_url_frontend_->HandleAddUrlFrontendRequest(&http_request, &http_reply);

    EXPECT_STREQ("200 OK", http_reply.text());
}

TEST_F(AddurlFrontendTest, HandlesBackendClientErrors)
{
    HTTPRequest http_request;
    HTTPReply http_reply;

    http_request.set_text("GET /addurl HTTP/1.1\r\n\r\n");

    fake_add_url_service_->set_error_code(400);
    fake_add_url_service_->set_error_details("Client Error");

    add_url_frontend_->HandleAddUrlFrontendRequest(&http_request, &http_reply);

    EXPECT_STREQ("400\r\nError Details: Client Error", http_reply.text());
}