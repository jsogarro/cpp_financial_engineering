#ifndef WEBSOCKET_H
#define WEBSOCKET_H

#include <cpprest/ws_client.h>
#include <vector>
#include <string>
#include <shared_mutex>

class Websocket
{
  private:
    // TODO: implement
  public:
    double BestAskPx();
    double BestBidPx();
    double MktMidPx();

    void Connect();
    void Disconnect();
    Websocket(std::vector<std::string> channels, std::string product_id, std::string uri);
    ~Websocket();
};

#endif