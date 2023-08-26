#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));  //newn = (struct Node*)malloc(sizeof(struct Node));

    //Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  //LL is Empty
    {
        *Head = newn;
    }   
    else  //LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First , 111);  //InsertFirst(60,111);
    InsertFirst(&First , 101);  //InsertFirst(60,101);
    InsertFirst(&First , 51);   //InsertFirst(60,51);
    InsertFirst(&First , 21);   //InsertFirst(60,21);
    InsertFirst(&First , 11);   //InsertFirst(60,11);

    Display(First);
    
    return 0;
}