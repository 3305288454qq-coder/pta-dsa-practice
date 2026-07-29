#include <iostream>
using namespace std;

int main()
{
    /*
       Problem 7-4: BCD Decoding

       Input:
       An incorrectly converted decimal integer in the range [0, 153].

       Output:
       The decimal number represented by the original valid BCD value.

       Example idea:
       Decimal 18 -> hexadecimal 0x12 -> BCD decimal 12
    */

    int incorrect_number;

    cin >> incorrect_number;

    int high_digit = incorrect_number / 16;
    int low_digit = incorrect_number % 16;
    int correct_number = high_digit * 10 + low_digit;

    cout << correct_number << "\n";

    return 0;
}
