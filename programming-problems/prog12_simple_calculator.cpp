#include <iostream>

using namespace std;

// PTA 7-12 两个数的简单计算器：根据运算符计算两个整数。
int main()
{
    int operand1, operand2;
    int result;
    char operation;

    cin >> operand1 >> operation >> operand2;

    switch (operation)
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;
    case '%':
        result = operand1 % operand2;
        break;
    default:
        cout << "ERROR" << '\n';
        return 0;
    }

    cout << result << '\n';

    return 0;
}
