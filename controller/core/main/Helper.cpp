#include "Helper.hpp"
std::string spinfluence::Helpers::u8ToHex(uint8_t value)
{
    std::string hex = "";
    std::map<int, char> uint8_t_to_hex;
    /*
        uint8_t to hex string lookup map
    */
    uint8_t_to_hex.insert(std::pair<int, char>(0, '0'));
    uint8_t_to_hex.insert(std::pair<int, char>(1, '1'));
    uint8_t_to_hex.insert(std::pair<int, char>(2, '2'));
    uint8_t_to_hex.insert(std::pair<int, char>(3, '3'));
    uint8_t_to_hex.insert(std::pair<int, char>(4, '4'));
    uint8_t_to_hex.insert(std::pair<int, char>(5, '5'));
    uint8_t_to_hex.insert(std::pair<int, char>(6, '6'));
    uint8_t_to_hex.insert(std::pair<int, char>(7, '7'));
    uint8_t_to_hex.insert(std::pair<int, char>(8, '8'));
    uint8_t_to_hex.insert(std::pair<int, char>(9, '9'));
    uint8_t_to_hex.insert(std::pair<int, char>(10, 'a'));
    uint8_t_to_hex.insert(std::pair<int, char>(11, 'b'));
    uint8_t_to_hex.insert(std::pair<int, char>(12, 'c'));
    uint8_t_to_hex.insert(std::pair<int, char>(13, 'd'));
    uint8_t_to_hex.insert(std::pair<int, char>(14, 'e'));
    uint8_t_to_hex.insert(std::pair<int, char>(15, 'f'));

    int diff = value / 16;
    hex += uint8_t_to_hex[diff];
    value = value - (diff * 16);
    hex += uint8_t_to_hex[value];
    return hex;
}

uint8_t spinfluence::Helpers::hexStringToU8(char hex)
{
    std::map<char, int> hex_lookup;
    hex_lookup.insert(std::pair<char, int>('0', 0x0));
    hex_lookup.insert(std::pair<char, int>('1', 0x1));
    hex_lookup.insert(std::pair<char, int>('2', 0x2));
    hex_lookup.insert(std::pair<char, int>('3', 0x3));
    hex_lookup.insert(std::pair<char, int>('4', 0x4));
    hex_lookup.insert(std::pair<char, int>('5', 0x5));
    hex_lookup.insert(std::pair<char, int>('6', 0x6));
    hex_lookup.insert(std::pair<char, int>('7', 0x7));
    hex_lookup.insert(std::pair<char, int>('8', 0x8));
    hex_lookup.insert(std::pair<char, int>('9', 0x9));
    hex_lookup.insert(std::pair<char, int>('a', 0xa));
    hex_lookup.insert(std::pair<char, int>('b', 0xb));
    hex_lookup.insert(std::pair<char, int>('c', 0xc));
    hex_lookup.insert(std::pair<char, int>('d', 0xd));
    hex_lookup.insert(std::pair<char, int>('e', 0xe));
    hex_lookup.insert(std::pair<char, int>('f', 0xf));
    return hex_lookup[hex];
}

std::string spinfluence::Helpers::u8ArraytohexString(uint8_t *arr, int array_length)
{
    std::string hex_string = "";
    for (int i = 0; i < array_length; i++)
    {
        hex_string += u8ToHex(arr[i]);
    }
    return hex_string;
}

 void spinfluence::Helpers::hexStringToUint8Array(std::string hexStringArg, uint8_t *arrayArg)
{
    int j = 0;
    //int lenOfArr = (hexStringArg.length() / 2);
    while (hexStringArg.length() != 0)
    {
        std::string temp = hexStringArg.substr(0, 2);
        hexStringArg = hexStringArg.substr(2, hexStringArg.length());
        int a = hexStringToU8(temp[0]);
        int b = hexStringToU8(temp[1]);
        arrayArg[j] = (a * 16) + b;
        j++;
    }
}

