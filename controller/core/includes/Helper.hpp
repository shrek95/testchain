#include <iostream>
#include <stdint.h>
#include <vector>
#include <sstream>

namespace spinfluence
{
    class Helpers
    {
        std::string u8ToHex(uint8_t value);
        uint8_t hexStringToU8(char hex);
        std::string u8ArraytohexString(uint8_t *arr, int);
        void hexStringToUint8Array(std::string, uint8_t*);
    }
}
