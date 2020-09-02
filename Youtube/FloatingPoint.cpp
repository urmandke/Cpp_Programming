#include <iostream>
#include <cmath>
#include <float.h>

using std::cout;
using std::cin;


int main()
{
    float a = 10.0 / 3;
    double b = 10.0/3 * 10000000000000;
    long double c;

    cout << std::fixed << b << std::endl;
    cout << LDBL_DIG << std::endl;

    return 0;
}

