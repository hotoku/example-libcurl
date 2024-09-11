#include <curl/curl.h>

int main()
{
    CURL *curl;
    // curlのセットアップ
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "https://qiita.com/");
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);

    // 実行
    curl_easy_perform(curl);

    // 後始末
    curl_easy_cleanup(curl);

    return 0;
}