#include <iomanip>
#include <iostream>

using namespace std;

// PTA 7-14 求整数段和：输出 A 到 B 的整数并计算总和。
int main()
{
    int start, end;
    int sum = 0;

    cin >> start >> end;

    int count = 0;

    for (int number = start; number <= end; number++)
    {
        cout << setw(5) << number;
        sum += number;
        count++;

        if (count % 5 == 0)
        {
            cout << '\n';
        }
    }

    if (count % 5 != 0)
    {
        cout << '\n';
    }

    cout << "Sum = " << sum << '\n';

    return 0;
}
