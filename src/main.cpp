#include <memory>

#include "singleton/set.hpp"

#include "stringGenarator.hpp"
#include "classWithSingleInstanceDependency.hpp"
#include "Tags.hpp"
#include "IStringGenarator.hpp"

int main()
{
    // TODO rozkminic tagi i dodac tak aby mozna bylo specygikowac interface ale jesli ktos zawola 2 razy set z ruzna lista typów i tym samym tagiem to static assert
    std::unique_ptr<IStringGenarator> ptr = std::make_unique<StringGenarator>();
    singleton::set<RandomStringGenaratorTag>(std::move(ptr));

    ClassWithSingleInstanceDependency classWithSingleInstanceDependency{};

    classWithSingleInstanceDependency.run();
    classWithSingleInstanceDependency.run();
    classWithSingleInstanceDependency.run();

    return 0;
}
