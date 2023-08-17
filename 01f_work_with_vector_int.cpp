// #include <cstring>
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
        for(size_t i=0; i < input_vector.size(); i++)
        {
            std::cout << input_vector[i] << ", ";
        }
        std::cout << "}" << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}

void print_stats(const std::vector<int> input_object)
{
    std::cout << "sizeof Object:\t" << sizeof(input_object) << " bytes"
        // << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
        << "\nObj.size() prop:\t" << input_object.size() << " elements"
        // << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
        << "\nObject type:\t" << typeid(input_object).name()
        // << "\t// get readeble name using: c++filt -t " << typeid(input_object).name()
        << "\nObject value:\t";
    print_vector(input_object);
}

int main()
{
    std::vector<int> input1(16, 42);

    print_stats(input1);
    input1[2] = 5;
    print_vector(input1);
    input1.push_back(99);
    print_vector(input1);

    return 0;
}
