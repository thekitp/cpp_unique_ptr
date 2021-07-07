#include <iostream>
#include <memory>
#include <typeinfo>

class bar
{
private:
    /* data */
public:
    bar(std::unique_ptr<std::string> str);
    ~bar();
};

bar::bar(std::unique_ptr<std::string> str)
{   
    std::cout << "str type is :" << typeid(str).name() << std::endl;
    std::cout << "The string size is : " << str->length() << std::endl;
}

bar::~bar()
{
}