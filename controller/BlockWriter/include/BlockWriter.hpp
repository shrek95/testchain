#include <iostream>
#include <stdint.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <>

namespace spinfluence
{
    class BlockWriter
    {
        bool writeFile(Block blockArg,
                BlockHeader blockHeaderArg,
                Transaction transactionArg);
    }
}
