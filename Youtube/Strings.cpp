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
    
    std::cin >> greeting;
    std::cout << greeting << std::endl;
        
    return 0;
}