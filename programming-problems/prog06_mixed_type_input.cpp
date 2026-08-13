#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
     * Problem 7-6: Mixed-Type Formatted Input
     *
     * Read, in order:
     *   floating-point number 1, integer, character,
     *   floating-point number 2
     *
     * Print, in order:
     *   character, integer, floating-point number 1,
     *   floating-point number 2
     *
     * Print both floating-point numbers with two digits
     * after the decimal point.
     */

    int integer_value;
    double num1, num2;
    char character;

    cin >> num1 >> integer_value >> character >> num2;

    cout << fixed << setprecision(2);
    cout << character << ' '
         << integer_value << ' '
         << num1 << ' '
         << num2 << '\n';

    return 0;
}
