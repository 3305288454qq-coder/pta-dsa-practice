#include <iostream>
using namespace std;

int main()
{
    /*
       Problem 7-2: What Time Will It Be?

       Input:
       1. A starting time written as an integer, such as 1106 or 530.
       2. A number of elapsed minutes, which may be greater than 60
          or may be negative.

       Output:
       The resulting time in the same integer format.
    */

    int start_time, elapsed_minutes;
    cin >> start_time >> elapsed_minutes;

    int start_hour = start_time / 100;
    int start_minute = start_time % 100;
    int start_total_minutes = start_hour * 60 + start_minute;

    int result_total_minutes = start_total_minutes + elapsed_minutes;
    int result_hour = result_total_minutes / 60;
    int result_minute = result_total_minutes % 60;

    cout << result_hour;
    if (result_minute < 10)
    {
        cout << 0;
    }
    cout << result_minute << endl;

    return 0;
}
