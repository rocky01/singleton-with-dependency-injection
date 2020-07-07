#ifndef SRC_ISTRINGGENERATOR_HPP_
#define SRC_ISTRINGGENERATOR_HPP_

#include <string>

class IStringGenarator
{
public:
    virtual ~IStringGenarator() = default;

    virtual std::string getString() = 0;
};

#endif  // #ifndef SRC_ISTRINGGENERATOR_HPP_