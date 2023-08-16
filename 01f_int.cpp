// Print "Hello world" stats
#include <cstring>
#include <iostream>
// #include <string> 
#include <typeinfo>
#include <vector>

#include "shssf_vector_tools.hpp"

void print_stats(const std::vector<int> input_object)
{
    std::cout << "Object size:\t" << sizeof(input_object) << " bytes"
            // << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
            << "\nObj.size() prop:\t" << input_object.size() << " unknown units"
            // << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
            << "\nObject type:\t" << typeid(input_object).name() << " (use c++filt -t to find readeble name)"
            // << "\nObject value:\t" << input_object.data 
            << std::endl;
}

int main()
{
    std::vector<int> example = {127};
    print_stats(example);
    std::cout << "------------------------" << std::endl;
    print_stats(std::vector<int> {32767});
    std::cout << "------------------------" << std::endl;
    // print_stats(99999);

    return 0;
}
