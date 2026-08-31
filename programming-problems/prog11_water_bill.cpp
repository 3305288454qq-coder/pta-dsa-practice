#include <iomanip>
#include <iostream>

using namespace std;

// PTA 7-11 分段计算居民水费：根据月用水量计算应交水费。
int main()
{
    // 第一步：声明变量并读入月用水量。
    double water_usage, water_bill;

    cin >> water_usage;

    if (water_usage <= 15)
    {
        water_bill = (4 * water_usage) / 3;
    }
    else
    {
        water_bill = 2.5 * water_usage - 17.5;
    }

    cout << fixed << setprecision(2) << water_bill << '\n';

    return 0;
}
