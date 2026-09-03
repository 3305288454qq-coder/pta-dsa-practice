#include <iomanip>
#include <iostream>

using namespace std;

// PTA 7-15 计算圆周率：累加数列项直到最后一项小于阈值。
int main()
{
    double threshold;
    double term = 1.0;
    double sum = 1.0;
    int n = 1;

    cin >> threshold;

    while (term >= threshold)
    {
        term *= static_cast<double>(n) / (2 * n + 1);
        sum += term;
        n++;
    }

    const double pi = 2.0 * sum;

    cout << fixed << setprecision(6) << pi << '\n';

    return 0;
}
