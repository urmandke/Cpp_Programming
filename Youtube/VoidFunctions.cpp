#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, double  exponent)
{
    double result = 1;
    for (int i = 0;i < exponent;i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, double exponent){
    double result = 1;
    for (int i = 0;i < exponent;i++)
    {
        result = result * base;
    }
    cout << "the result is " << result << "\n"<< std::endl;
}

int main()
{
    int base, exponent;

    cin >> base;
    cin >> exponent;
    double myPower = power(base,exponent);
    cout << myPower << std::endl;
    print_pow(base, exponent);
    
    return 0;
}

