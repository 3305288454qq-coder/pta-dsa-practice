#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit ( const int N, const int D )
{
    int count = 0;
    int num = N;

    if ( num < 0)
    {
        num = -num;
    }

    if ( num == 0 && D == 0 )
    {
        return 1;
    }

    while ( num > 0 )
    {
        int d = num % 10;

        if ( d == D )
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}