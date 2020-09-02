#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int slices = 5; 
    std::cout << "How many slices did you eat?" << std::endl; 
    std::cin >> slices;
    std::cout << "You ate " << slices << " slices.\n" << std::endl; 

    return 0;
}