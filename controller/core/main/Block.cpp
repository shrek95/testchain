#include "Block.hpp"

spinfluence::Block::Block(BlockHeader blockHeaderArg,
        Transaction transactionArg,
        std::string testCodeArg,
        std::string signArg)
{
    this->blockHeader = blockHeaderArg;
    this->transaction = transactionArg;
    spinfluence::Helpers::hexStringToUint8Array(testCodeArg, this->testCode);
    spinfluence::Helpers::hexStringToUint8Array(signArg, this->sign);
}

std::string spinfluence::Block::stringifyBlock()
{
    serializedData = "";
    serializedData += blockHeader.stringifyBlockHeader();
    serializedData += transaction.stringifyTransaction();
    serializedData += spinfluence::Helpers::u8ArraytohexString(this->testCode, 4);
    serializedData += spinfluence::Helpers::u8ArraytohexString(this->sign, 64);
}  

std::string spinfluence::Block::hashSha256()
{
    std::vector<unsigned char> hash(32);
    std::string data = this->serializedData;
    picosha2::hash256(data.begin(), data.end(), hash.begin(), hash.end());
    return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
}

