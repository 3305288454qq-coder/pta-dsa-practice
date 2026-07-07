#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N )
{
    int root = sqrt(N);
    if ( root * root != N )
    {
        return 0;
    }
    
    int digit[10] = {0};
    int num = N;

    while ( num > 0 )
    {
        int d = num % 10;

        if ( digit[d] == 1 )
        {
            return 1;
        }

        digit[d] = 1;
        num = num / 10;
    }
    return 0;
}