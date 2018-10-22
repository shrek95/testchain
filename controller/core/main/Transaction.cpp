#include "Transaction.hpp"

spinfluence::Transaction::Transaction(uint32_t userIdArg,
        uint32_t resultArg,
        uint32_t facultyCodeArg);
{
    this->userId = userIdArg;
    this->result = resultArg;
    this->facultyCode = facultyCodeArg;
}

std::string spinfluence::Transaction::stringifyTransaction()
{
    std::string serializedData = "";
    serialized += std::to_string(this->userId);
    serialized += std::to_string(this->result);
    serialized += std::to_string(this->facultyCode);
    return serializedData;
}
