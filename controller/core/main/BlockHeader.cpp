#include "BlockHeader.hpp"

spinfluence::BlockHeader::BlockHeader(uint32_t vNumberArg,
        std::string prevHashArg, uint32_t timestampArg)
{
    this->vNumber = vNumberArg;
    this->prevHash = hexStringToUint8Array(prevHashArg, this->prevHash);
    this->timestamp = timestampArg;
}

spinfluence::BlockHeader::stringifyBlockHeader()
{
    std::string serializedData = "";
    serializedData += std::to_string(this->vNumber);
    serializedData += u8ArraytohexString(this->prevHash, 32);
    serializedData += std::to_string(this->timestamp);
}
