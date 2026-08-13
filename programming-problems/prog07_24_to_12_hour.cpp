#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Problem 7-7: 24-Hour Time to 12-Hour Time
     *
     * Input example:  17:6
     * Output example: 5:6 PM
     *
     * Follow the problem's special rule:
     * 0:0 is printed as 0:0 AM.
     */

    int hour, minute;
    char colon;

    cin >> hour >> colon >> minute;

    string period;
    if (hour < 12)
    {
        period = "AM";
    }
    else
    {
        period = "PM";
    }
    if (hour > 12)
    {
        hour -= 12;
    }

    cout << hour << ':' << minute << ' ' << period << '\n';

    return 0;
}
