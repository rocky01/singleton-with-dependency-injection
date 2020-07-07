#ifndef LIB_SET_HPP_
#define LIB_SET_HPP_

#include "singleton.hpp"

namespace singleton
{

template<typename Tag>
void set(std::unique_ptr<typename Tag::type>&& ptr)
{
    return Singleton<Tag>::set(std::move(ptr));
}

template<typename Tag>
void destroy()
{
    return Singleton<Tag>::destroy();
}

}  // namespace singleton

#endif  // LIB_SET_HPP_
