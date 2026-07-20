#include "ping.hpp"

Ping::Ping()
{
    // Corretto: curl_easy_init
    curl = curl_easy_init();
}

Ping::~Ping()
{
    // Corretto: curl_easy_cleanup
    if (curl)
        curl_easy_cleanup(curl);
}

PingResult Ping::check(const std::string &url)
{
    if (!curl)
        return PingResult::CurlError;

    // Corretto: curl_easy_setopt
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_NOBODY, 1L);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5L);

    // Esecuzione e controllo del risultato
    return (curl_easy_perform(curl) == CURLE_OK) ? PingResult::Success : PingResult::Failed;
}