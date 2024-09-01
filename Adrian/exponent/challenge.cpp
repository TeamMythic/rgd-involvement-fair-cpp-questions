/*
    Rebel Game Devs - Involvement Fair C++ Challenge
*/

#include <iostream>
#include "helper.h"
using namespace std;

int power(int base, int exponent) {
    int result = base;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main()
{
    int base;
    int exponent;
    cout << "Please enter a number.\n";
    cin >> base;
    cout << "Please enter an exponent.\n";
    cin >> exponent;
    cout << base << " to the power of " << exponent << " is " << power(base, exponent) << endl;

    return EXIT_SUCCESS;
}