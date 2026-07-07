#include <stdio.h>
#include <stdlib.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
int cmp_desc( const void *a, const void *b )
{
    ElementType x = *(const ElementType *)a;
    ElementType y = *(const ElementType *)b;

    if ( x < y ) return 1;
    if ( x > y ) return -1;
    return 0;
}

ElementType Median( ElementType A[], int N )
{
    qsort(A, N, sizeof(ElementType), cmp_desc);

    int k = (N + 1) / 2;

    return A[k - 1];
}