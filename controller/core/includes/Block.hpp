#include <iostream>
#include <stdint.h>
#include <vector>
#include <sstream>
#include "BlockHeader.hpp"
#include "Transaction.hpp"
#include "Helpers.hpp"

namespace spinfluence
{
    class Block
    {
        private:
            BlockHeader blockHeader;
            Transaction transaction;
            std::String serializedData;
            uint8_t testCode[4];
            uint8_t sign[64];
        public:
            Block(BlockHeader blockHeaderArg,
                    Transaction transactionArg,
                    std::string testCodeArg,
                    std::string signArg);
            BlockHeader getBlockHeader();
            Transaction getTransactions();
            uint8_t *getTestCode();
            uint8_t *getSign();
            std::string stringifyBlock();
    }
}
