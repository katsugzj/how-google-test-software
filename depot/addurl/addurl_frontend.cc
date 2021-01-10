#include "addurl/addurl_frontend.h"
#include "addurl/addurl.pb.h"
#include "path/to/httpqueryparams.h"

void ExtractHttpQueryParams(const HTTPRequest* http_request, HTTPQueryParams* query_params);
void WriteHttp200Reply(HTTPReply* reply);
void WriteHttpReplyWithErrorDetials(HTTPReply* http_reply, const AddUrlReply& add_url_reply);

AddUrlFrontend::AddUrlFrontend(AddUrlService* add_url_service):add_url_service_(add_url_service){

}

AddUrlFrontend::~AddUrlFrontend(){

}

void AddUrlFrontend::HandleAddUrlFrontendRequest(const HTTPRequest* http_request, HTTPReply* http_reply){
    
    HTTPQueryParams query_params;
    ExtractHttpQueryParams(http_request, &query_params);

    string url = query_params.GetQueryComponentDefault("url","");
    string comment = query_params.GetQueryComponentDefault("comment","");

    AddUrlRequest add_url_request;
    AddUrlReply add_url_reply;
    add_url_request.set_url(url);
    if(!comment.empty()){
        add_url_request.set_comment(comment);
    }

    RPC rpc;
    add_url_service_->AddUrl(&rpc, &add_url_request, &add_url_reply);

    rpc.Wait();

    if(add_url_reply.has_error_code()){
        WriteHttpReplyWithErrorDetials(http_reply,add_url_reply);
    }else{
        WriteHttp200Reply(http_reply);
    }
}