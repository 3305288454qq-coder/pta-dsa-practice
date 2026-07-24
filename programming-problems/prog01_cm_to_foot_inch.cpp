#include <iostream>
using namespace std;

int main()
{
    int cm;

    cin >> cm;

    /*
       Problem 7-1:
       Convert centimeters to foot and inch.

       Think about:
       1. Convert cm to total inches first.
       2. 1 foot = 12 inches.
       3. inch should be less than 12.
    */

    double m = cm / 100.0;
    double feet = m / 0.3048;
    int foot = feet;
    int inch = (feet - foot) * 12;

    cout << foot << " " << inch;
    

    return 0;
}
