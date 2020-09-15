#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{
    auto x = 5U;
    int number = 30; 
    std::cout << std::oct << number << std::endl; // prints octo equivalent of the number
    std::cout << std::hex << number << std::endl; // prints hex equivalent of the number

    return 0;
}