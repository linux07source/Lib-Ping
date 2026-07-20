#ifndef PING_H
#define PING_H

#include <curl/curl.h>
#include <string>

enum class PingResult
{
    Success,
    Failed,
    CurlError
};

class Ping
{
public:
    Ping();
    ~Ping();
    PingResult check(const std::string &url);

private:
    CURL *curl;
};

#endif