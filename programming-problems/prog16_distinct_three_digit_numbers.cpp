#include <iostream>

using namespace std;

// PTA 7-16 求符合给定条件的整数集：用连续4个数字组成无重复数字的3位数。
int main()
{
    int start_digit;
    cin >> start_digit;
    
    const int end_digit = start_digit + 3;

    int numbers_in_line = 0;

    for (int hundreds = start_digit; hundreds <= end_digit; hundreds++)
    {
        for (int tens = start_digit; tens <= end_digit; tens++)
        {
            for (int ones = start_digit; ones <= end_digit; ones++)
            {
                if (hundreds != tens &&
                    hundreds != ones &&
                    tens != ones)
                {
                    const int number = hundreds * 100 + tens * 10 + ones;
                    cout << number;
                    numbers_in_line++;

                    if (numbers_in_line == 6)
                    {
                        numbers_in_line = 0;
                        cout << '\n';
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
            }
        }
    }

    return 0;
}
