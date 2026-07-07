#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
    
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial ( const int N )
{
    if ( N < 0 )
    {
        printf("Invalid input\n");
        return;
    }

    int a[3000] = {0};
    a[0] = 1;
    int len = 1;

    for ( int i = 2; i <= N; i++ )
    {
        int carry = 0;

        for ( int j = 0; j < len; j++ )
        {
            int temp = a[j] * i + carry;

            a[j] = temp % 10;

            carry = temp / 10;
        }

        while ( carry > 0 )
        {
            a[len] = carry % 10;
            len++;
            carry = carry / 10;
        }
    }

    for ( int i = len - 1; i >= 0; i-- )
    {
        printf("%d", a[i]);
    }
    printf("\n");
}