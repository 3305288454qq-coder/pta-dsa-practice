#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Problem 7-8: Speeding Check
     *
     * Read a non-negative integer representing a vehicle's speed.
     * If the speed is greater than 60 mph, print "Speeding";
     * otherwise, print "OK".
     *
     * Required output format:
     * Speed: V - S
     */

    int speed;
    string speed_status;

    cin >> speed;

    if (speed > 60)
    {
        speed_status = "Speeding";
    }
    else
    {
        speed_status = "OK";
    }

    cout << "Speed: " << speed << " - " << speed_status << '\n';

    return 0;
}
