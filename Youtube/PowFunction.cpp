#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    int base, exponent;

    cin >> base;
    cin >> exponent;
    cout << pow(base,exponent) << "\n";
    
    return 0;
}