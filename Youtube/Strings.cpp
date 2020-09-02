#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{
    std::string greeting = "hello";
    std:: string complete_greeting = greeting + " there";
      
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl; 
    //method == function attached to a class. E.g length.
    
    std::string leftover;
    std::cin >> greeting;
    std::cin >> leftover;

    std::cout << (greeting + leftover) << std::endl;  //The bitwise operator has higher precedence than concaternation of strings apparently
    std::cout << leftover << std::endl;
             
    return 0;
}