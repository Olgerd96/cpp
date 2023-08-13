// Print "Hello world" from procedure
#include <iostream>

void print_string(std::string input_string)
{
    std::cout << input_string << std::endl;
}

int main()
{
    std::string message = "Hello world v0.1b !";
    print_string(message);

    return 0;
}
