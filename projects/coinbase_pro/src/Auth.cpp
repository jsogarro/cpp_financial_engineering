#include "include/Auth.h"
#include <iostream>
#include "cryptopp/cryptlib.h"
#include "cryptopp/hmac.h"
#include "cryptopp/sha.h"
#include "cryptopp/base64.h"
#include "cryptopp/filters.h"

using CryptoPP::Exception;
using CryptoPP::HMAC;
using CryptoPP::SHA256;
using CryptoPP::Base64Decoder;
using CryptoPP::Base64Encoder;
using CryptoPP::StringSink;
using CryptoPP::StringSource;
using CryptoPP::HashFilter;

std::String Auth::Sign(std::string timestamp, std::string method, std::string path, std::string body)
{
  // TODO: implement
}