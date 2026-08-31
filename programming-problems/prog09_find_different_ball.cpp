#include <iostream>

using namespace std;

// PTA 7-9 用天平找小球：找出 A、B、C 中重量不同的球。
int main()
{
    // 请从读取三个球的重量开始。
    int weightA, weightB, weightC;
    
    cin >> weightA >> weightB >> weightC;

    if (weightA == weightB)
    {
        cout << 'C' << '\n';
    }
    else if (weightA == weightC)
    {
        cout << 'B' << '\n';
    }
    else
    {
        cout << 'A' << '\n';
    }

    return 0;
}
