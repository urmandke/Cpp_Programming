#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{
    std::string greeting = "Hello";
    greeting.append(" there");
    greeting.insert(3,"         ");
    greeting.erase(3,9); // removes 9 characters from Index 3
    greeting.erase(3); //Erases all characters after Index 3
    greeting.pop_back(); //Deletes the last character
    greeting.replace(0,4, "Heaven"); // replaces the first 4 characters (from index 0) with "Heaven"
    std::cout << greeting << std::endl;

    std::cout << greeting.substr(5,2) << std::endl; // substr  outputs the 2 characters at 5 index.
    
    
    return 0;
}