#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node * next;
}NODE , *PNODE , **PPNODE;

/*

1. Allocate memory for new Node
2. Initialise the Node
3. Check whether LL is empty
4. If LL is emplty store address of newnode in First
5. Otherwise store the address of newnode inside next pointer of old first node
6. Update First pointer with the address of new node.

*/

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //1

    newn->data = No;
    newn->next = NULL;       //2

    if(*Head == NULL)        //3
    {
        *Head = newn;        //4
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }

}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //1

    PNODE temp = *Head;

    newn->data = No;
    newn->next = NULL;       //2

    if(*Head == NULL)        //3
    {
        *Head = newn;        //4
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First , 11);
    InsertLast(&First , 21);
    InsertLast(&First , 51);
    InsertLast(&First , 101);
    
    Display(First);

    iRet = Count(First);

    printf("Number of Nodes are : %d\n",iRet);

    printf("\n");

    InsertFirst(&First , 10);
    InsertFirst(&First , 20);

    Display(First);

    iRet = Count(First);

    printf("Number of Nodes are : %d\n",iRet);
    return 0;
}