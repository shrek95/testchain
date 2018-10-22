#include <iostream>
#include <stdint.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

namespace spinfluence
{
    class BlockReader
    {
        private:
            std::string blockFilePath;
        public:
            BlockRead(std::string blockFilePath);
            bool readFile();
    }
}
