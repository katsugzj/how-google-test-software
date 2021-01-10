#ifndef ADDURL_ADDURL_FRONTEND_H_
#define ADDURL_ADDURL_FRONTEND_H_

class AddUrlService;
class HTTPRequest;
class HTTPReply;

class AddUrlFrontend{
    
    public:
    explicit AddUrlFrontend(AddUrlService* add_url_service);
    ~AddUrlFrontend();
    void HandleAddUrlFrontendRequest(const HTTPRequest* HTTPRequest, HTTPReply* HTTPReply);

    private:
    AddUrlService* add_url_service_;
    AddUrlFrontend(const AddUrlFrontend&);
    AddUrlFrontend& operator=(const AddUrlFrontend& rhs);
};

#endif                    