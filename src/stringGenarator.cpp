#include "stringGenarator.hpp"

#include <stdlib.h>
#include <cstddef>

std::string StringGenarator::getString()
{
    constexpr std::size_t len = 10;
    std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string newstr;
    int pos;
    while(newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos,1);
    }
    return newstr;
}
