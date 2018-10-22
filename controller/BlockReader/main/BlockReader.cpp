#include "BlockReader.hpp"

spinfluence::BlockRead(std::string blockFilePathArg)
{
    this->blockFilePath = blockFilePathArg;
}

bool spinfluence::BlockReader::readFile(std::string filePathArg)
{
    std::ifstream reader;
    reader.open(blockFilePath, std::ios::binary | std::ios::in);
    while(true)
    {
        uint32_t vNumber;
        reader.read((char*)&vNumber, sizeof(vNumber));
        uint8_t prevHash[32];
        reader.read((char*)&prevHash, sizeof(prevHash));
        uint32_t timestamp;
        reader.read((char*)&timestamp, sizeof(timestamp));

        uint32_t userId;
        reader.read((char*)&userId, sizeof(userId));
        uint32_t result;
        reader.read((char*)&result, sizeof(result));
        uint32_t facultyCode;
        reader.read((char*)&facultyCode, sizeof(facultyCode));

        uint8_t testCode[4];
        reader.read((char*)&testCode, sizeof(testCode));
        uint8_t sign[64];
        reader.read((char*)&sign, sizeof(sign));
    }

}
