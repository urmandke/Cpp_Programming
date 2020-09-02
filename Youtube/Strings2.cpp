#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{
    std::string greeting = "hello";
    getline(std::cin, greeting);

    std:cout << greeting << std::endl;
    
    return 0;
}