#include <cstring>
#include <iostream>
// #include <string> 
#include <typeinfo>
#include <vector>

// predefined function from vector to ostream
// #include "shssf_vector_tools.hpp"

void print_vector(const std::vector<int> input_vector)
{
    if (input_vector.size() > 0)
    {
        std::cout << "{";
        for (auto cur_element : input_vector)
        {
            std::cout << cur_element << ", ";
        }
        std::cout << "\b\b}";    // \b remove ", " separator
    }
}

void print_stats(const std::vector<int> input_object)
{
    std::cout << "sizeof Object:\t" << sizeof(input_object) << " bytes"
        // << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
        << "\nObj.size() prop:\t" << input_object.size() << " elements"
        // << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
        << "\nObject type:\t" << typeid(input_object).name() << "  \t// get readeble name using: c++filt -t " << typeid(input_object).name()
        << "\nObject value:\t";
    print_vector(input_object);
    std::cout << std::endl;
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
