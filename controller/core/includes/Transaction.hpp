#include <iostream>
#include <stdint.h>
#include <vector>
#include <sstream>
#include "BlockHeader.hpp"
#include "Transaction.hpp"

namespace spinfluence
{
    class Transaction
    {
        private:
            uint32_t userId;
            uint32_t result;
            uint32_t facultyCode;
            std::string stringHolderTx;
        public:
            Transaction(uint32_t userId,
                    uint32_t result,
                    uint32_t facultyCode);
            uint32_t getUserId();
            uint32_t getResult();
            uint32_t getFacultyCode();
            std::string stringifyTransaction();
    }
}
