// Print "Hello world" stats
#include <iostream>
//#include <string> 
#include <typeinfo>

void print_stats(std::string input_object)
{
    std::cout << "Object size:\t" << sizeof(input_object)
            << "\nObj .size prop:\t" << input_object.size()
            << "\nObject lengh:\t" << input_object.length()
            << "\nObject type:\t" << typeid(input_object).name()
            << "\nObject value:\t" << input_object << std::endl;
}

int main()
{
    std::string message = "Hello world v0.1c !";
    print_stats(message);

    return 0;
}
