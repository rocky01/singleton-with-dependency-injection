#include "classWithSingleInstanceDependency.hpp"

#include <iostream>

#include "singleton/get.hpp"

#include "Tags.hpp"

void ClassWithSingleInstanceDependency::run()
{
    std::cout << "The generated random string is: " << singleton::get<RandomStringGenaratorTag>().getString() << std::endl;
}