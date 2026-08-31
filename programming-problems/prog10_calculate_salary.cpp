#include <iomanip>
#include <iostream>

using namespace std;

// PTA 7-10 计算工资：根据入职年数和周工作时间计算周薪。
int main()
{
    int years_of_service, weekly_hours;
    double salary, hourly_wage;

    cin >> years_of_service >> weekly_hours;

    if (years_of_service < 5)
    {
        hourly_wage = 30.0;
    }
    else
    {
        hourly_wage = 50.0;
    }

    if (weekly_hours <= 40)
    {
        salary = weekly_hours * hourly_wage;
    }
    else
    {
        salary = 40 * hourly_wage
       + (weekly_hours - 40) * hourly_wage * 1.5;
    }

    cout << fixed << setprecision(2) << salary << '\n';

    return 0;
}
