#ifndef API_H
#define API_H

#include "Auth.h"
#include <string>

class API 
{
  private:
    Call(std::string method, bool authed, std::string path, std::string body);
  
  public:
    API();
    ~API();
    Auth auth;
    std::string uri;
    std::string productId;
    std::string GetBidPrice();
    std::string GetAskPrice();
    double GetBalance();
    std::string PlaceLimitOrder(std::string side, std::string price, std::string size);
};

#endif