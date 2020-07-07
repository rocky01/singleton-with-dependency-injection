#ifndef SRC_STRINGGENERATOR_HPP_
#define SRC_STRINGGENERATOR_HPP_

#include <string>

#include "IStringGenarator.hpp"

class StringGenarator : public IStringGenarator
{
public:
    StringGenarator() = default;

    std::string getString();
};

#endif  // #ifndef SRC_STRINGGENERATOR_HPP_