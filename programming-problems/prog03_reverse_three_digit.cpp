#include <iostream>
using namespace std;

int main()
{
    /*
       Problem 7-3: Reverse a Three-Digit Number

       Input:
       A positive three-digit integer.

       Output:
       The number with its digits reversed.
       Leading zeros must not be printed, so 700 becomes 7.
    */

    int original_number;
    int reversed_number = 0;

    cin >> original_number;

    for (int i = 0; i < 3; i++)
    {
        int digit = original_number % 10;
        original_number = original_number / 10;
        reversed_number = reversed_number * 10 + digit;
    }
    
    cout << reversed_number << '\n';

    return 0;
}