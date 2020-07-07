#ifndef LIB_SINGLETON_HPP_
#define LIB_SINGLETON_HPP_

#include <memory>
#include <stdexcept>

namespace singleton
{

template<typename Tag>
class Singleton
{
public:
    using T = typename Tag::type;

    static void set(std::unique_ptr<T>&& ptr)
    {
        if (nullptr == ptr)
        {
            throw std::logic_error("The object should not be initialized with nullptr");
        }
        ptr_ = std::move(ptr);
    }

    static T& get()
    {
        if (isInitialized())
        {
            return *ptr_;
        }
        throw std::logic_error("Setter should be called before get method.");
    }

    static void destroy()
    {
        ptr_.reset();
    }

private:
    static bool isInitialized()
    {
        return not (nullptr == ptr_);
    }

    static std::unique_ptr<T> ptr_;
};

template <typename Tag>
std::unique_ptr<typename Tag::type> Singleton<Tag>::ptr_ = nullptr;

}  // namespace singleton

#endif  // LIB_SINGLETON_HPP_