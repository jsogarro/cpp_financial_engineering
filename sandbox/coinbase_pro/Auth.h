#ifndef AUTH_H
#define AUTH_H

#include<string>

class Auth 
{
  public:
    std::string Key;
    std::string Secret;
    std::string Passphrase;
    std::string Sign(std::string timestamp, std::string method, std::string path, std::string body);

    Auth() {}
    Auth(std::string key, std::string secret, std::string passphrase);
};

#endif