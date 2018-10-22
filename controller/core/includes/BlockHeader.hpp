#include <iostream>
#include <stdint.h>
#include <vector>
#include <sstream>
#include "BlockHeader.hpp"
#include "Helper.hpp"

namespace spinfluence
{
    class BlockHeader
    {
        private:
            uint32_t vNumber;
            uint8_t prevHash[32];
            uint32_t timestamp;
        public:
            BlockHeader(uint32_t vNumberArg,
                    std::string prevHashArg,
                    uint32_t timestampArg);
            uin32_t getvNumber();
            uint8_t *getprevHash();
            uint32_t timestamp();
            std::string stringifyBlockHeader();
    }

}
