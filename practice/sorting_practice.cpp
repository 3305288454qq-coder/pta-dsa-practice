#include <stdio.h>
#include <stdlib.h>

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i + 1 < n)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void BubbleSortAsc(int a[], int n)
{
    /*
       Practice 1:
       Write bubble sort here.
       Goal: sort from small to large.
    */

    for ( int i = 0; i < n - 1; i++ )
    {

        for ( int j = 0; j < n - 1 - i; j++ )
        {
            if ( a[j] > a[j + 1] )
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void SelectionSortDesc(int a[], int n)
{
    /*
       Practice 2:
       Write selection sort here.
       Goal: sort from large to small.
    */

    for ( int i = 0; i < n; i++ )
    {
        int maxIndex = i;

        for ( int j = i + 1; j < n; j++ )
        {
            if ( a[j] > a[maxIndex] )
            {
                maxIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }
}

int CmpDesc(const void *a, const void *b)
{
    /*
       Practice 3:
       Write qsort compare function here.
       Goal: sort int values from large to small.
    */

    int x = *(const int *)a;
    int y = *(const int *)b;
    
    if (x < y)
    {
        return 1;
    }

    if (x > y)
    {
        return -1;
    }
    
    return 0;
}

int main()
{
    int a1[] = {5, 1, 9, 3, 7};
    int a2[] = {5, 1, 9, 3, 7};
    int a3[] = {5, 1, 9, 3, 7};
    int n = 5;

    BubbleSortAsc(a1, n);
    PrintArray(a1, n);

    SelectionSortDesc(a2, n);
    PrintArray(a2, n);

    qsort(a3, n, sizeof(int), CmpDesc);
    PrintArray(a3, n);

    return 0;
}
