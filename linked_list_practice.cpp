#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;

struct Node {
    int Data;
    PtrToNode Next;
};

typedef PtrToNode List;

int main()
{
    List L = NULL;

    /*
       Practice 1:
       Create one node:
       1. Use malloc to create one node and let p point to it.
       2. Put 10 into p->Data.
       3. Let p->Next point to NULL.
       4. Let L point to p.
       5. Print L->Data.
       

       Useful forms:
       p = (List)malloc(sizeof(struct Node));
       p->Data = 10;
       p->Next = NULL;
       L = p;
       printf("%d\n", L->Data);

       Practice 2:
       After Practice 1 works, create three nodes with Data 10, 20, 30.
       Link them like this:

       L -> [10] -> [20] -> [30] -> NULL

       Then use a while loop to print every node's Data.

       Practice 3:
       After Practice 2 works, comment out Practice 2 code.
       Read N from input, then read N integers.
       Use a for loop and head insertion to create a linked list.

       Head insertion idea:
       p = create a new node
       read p->Data
       p->Next = L
       L = p

       Then use a while loop to print every node's Data.
    */
    /*
    p = (List)malloc(sizeof(struct Node));
    p->Data = 10;
    p->Next = NULL;
    L = p;
    printf ("%d", L->Data);
    */
    /*
    List p1, p2, p3;
    p2 = (List)malloc(sizeof(struct Node));
    p3 = (List)malloc(sizeof(struct Node));
    p1 = (List)malloc(sizeof(struct Node));
    p1->Data = 10;
    p2->Data = 20;
    p3->Data = 30;
    p1->Next = p2;
    p2->Next = p3;
    p3->Next = NULL;
    L = p1;

    List cur = L;
    while ( cur != NULL )
    {
        printf("%d\n", cur->Data);
        cur = cur->Next;
    }
    */
    int N;
    List p;
    scanf("%d", &N);
    for ( int i = 0; i < N; i++ )
    {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;
        L = p;
    }
    List cur = L;
    while( cur != NULL )
    {
        printf("%d\n", cur->Data);
        cur = cur->Next;
    
    }
    return 0;
}
