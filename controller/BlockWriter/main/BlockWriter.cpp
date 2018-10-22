#include "BlockWriter.hpp"

bool spinfluence::BlockWriter::writeFile(Block blockArg,
                BlockHeader blockHeaderArg,
                Transaction transactionArg)
{
    std::string serializedData = "";
    serializedData += blockArg.stringifyBlock;
    serializedData += blockHeaderArg.stringifyBlockHeader;
    serializedData += transactionArg.stringHolderTx;
    
    
    std::fstream writer;
    writer.open("<FILENAME>");
    writer << serializedData;
    writer.close();
    return writer;
}
