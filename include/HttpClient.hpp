// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#ifndef DJINNI_GENERATED_HTTPCLIENT_HPP
#define DJINNI_GENERATED_HTTPCLIENT_HPP

#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class HttpRequest;

/**Class representing the http client performing the http requests */
class HttpClient {
public:
    virtual ~HttpClient() {}

    /**
     *Execute a giver Http request\
     *@param request, HttpRequest object, requestr to execute
     */
    virtual void execute(const std::shared_ptr<HttpRequest> & request) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_HTTPCLIENT_HPP
