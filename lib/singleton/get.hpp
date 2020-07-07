#ifndef LIB_GET_HPP_
#define  LIB_GET_HPP_

#include "singleton.hpp"

namespace singleton
{

template<typename Tag>
typename Tag::type& get()
{
    return Singleton<Tag>::get();
}

}  // namespace singleton

#endif  // LIB_GET_HPP_