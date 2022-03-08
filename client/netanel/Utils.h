#ifndef UTILS_HEADER
#define UTILS_HEADER

#include <string>
#include "constants.h"

// converts a string to bytes vector
bytes strTobytes(const std::string &str);

// converts bytes vector to string
std::string bytesToStr(const bytes &bytesVector);

// converts bytes vector to hex string.
std::string bytesToHex(const bytes &bytes);

// converts hex string to bytes vector.
bytes hexTobytes(const std::string &hexString);

// converts 4 bytes from the bytes array to integer
int bytesToInt(const unsigned char *bytes);


#endif
