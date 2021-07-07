#include "bar.hpp"

int main(int argc, char const *argv[])
{
    // make a large string at 1M+ length
    std::string foo(1024 * 1024, '*');

    // make smart pointer reference to the string
    auto foo_ptr = std::make_unique<std::string>(foo);

    // call bar func
    bar(std::move(foo_ptr));
    
    return 0;
}
