#include <cstring>
#include <iostream>
// #include <string> 
#include <typeinfo>
#include <vector>

// predefined function from vector to ostream
// #include "shssf_vector_tools.hpp"

void print_stats(const std::vector<int> input_object)
{
    std::cout << "sizeof Object:\t" << sizeof(input_object) << " bytes"
        // << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
        << "\nObj.size() prop:\t" << input_object.size() << " elements"
        // << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
        << "\nObject type:\t" << typeid(input_object).name() << "  \t// get readeble name using: c++filt -t " << typeid(input_object).name()
        << "\nObject value:\t{";
    for (auto cur_element : input_object)
    {
        std::cout << cur_element << ", ";
    }
    // TODO: bug report - delete useful information for empty vector
    std::cout << "\b\b}" << std::endl;  // \b remove ", " separator from previous loop
}

int main()
{
    std::vector<int> example = {127};
    print_stats(example);
    std::cout << "------------------------" << std::endl;
    print_stats(std::vector<int> {32767});
    std::cout << "------------------------" << std::endl;
    print_stats(std::vector<int> {123, 234, 345});

    return 0;
}
