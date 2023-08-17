// Print (const) strings stats
#include <cstring>
#include <iostream>
#include <string> 
#include <typeinfo>

void print_stats(const std::string input_object)
{
    std::cout << "Object size:\t" << sizeof(input_object) << " bytes"
            << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
            << "\nObj.size() prop:\t" << input_object.size() << " unknown units"
            << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
            << "\nObject type:\t" << typeid(input_object).name() << " (use c++filt -t to find readeble name)"
            << "\nObject value:\t" << input_object << std::endl;
}

int main()
{
    std::string message = "Hello world v0.1c !!!__________33";
    print_stats(message);
    std::cout << "------------------------" << std::endl;
    print_stats("ministr");
    std::cout << "------------------------" << std::endl;
    print_stats("This_____is_____very-----very-----very_____long____string__________________________________________________________________________");

    return 0;
}
