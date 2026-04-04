#include<stdio.h>
#include<stdlib.h>

void printLinkedList(struct Node *hdptr);
void Sgl_add_end(struct Node **hdptr);
struct Node{
    int data;
    struct Node *next; 
}node;

struct doubleLinkedList{
    struct doubleLinkedList *pre;
    int data;
    struct doubleLinkedList *next;
}dblNode;

int main()
{
    struct Node *hdptr=0;
    char ch;
    do{
        Sgl_add_end(&hdptr);
        printf("Do you wants to add more nodes?Y/N\n");
        scanf(" %c",&ch);
    }while(ch=='Y'|| ch=='y');

    printLinkedList(hdptr);
    return 0;
}

void Sgl_add_end(struct Node **hdptr)
{
    struct Node *newOne, *temp;
    newOne = (struct Node *)malloc(sizeof(node));

    printf("Enter the number\n");
    scanf("%d",&newOne->data);
        if(*hdptr==0){
            newOne->next=*hdptr;
            *hdptr=newOne;
        }
        else{
            temp=*hdptr;
            while(temp->next)
            {
                temp=temp->next;
            }
            newOne->next=0;
            temp->next=newOne;
        }
}

void Sgl_add_begin(struct Node **hdptr){
    struct Node *newOne, *temp;

    newOne=(struct Node *)malloc(sizeof(struct Node));

    printf("Enter the number\n");
    scanf("%d",&newOne->data);

    newOne->next=*hdptr;
    *hdptr=newOne;
}

void dbl_add_end(struct Node **hdptr){
    struct doubleLinkedList *newOne, *temp;

    newOne = (struct Node *)malloc(sizeof(struct Node));

    newOne->pre=0;
    newOne->next=0;
    printf("Enter the number\n");
    scanf("%d",&newOne->data);

    if(*hdptr==0)
    {
        *hdptr= newOne;
    }else{
        temp=*hdptr;
        while(temp->next)
        {
            temp=temp->next;
        }
        newOne->pre=temp;
        temp->next= newOne;
    }
}

void crcl_add_end(struct Node **hdptr){
    struct doubleLinkedList *newOne, *temp;

    newOne = (struct Node *)malloc(sizeof(struct Node));

    newOne->pre=0;
    newOne->next=0;
    printf("Enter the number\n");
    scanf("%d",&newOne->data);

    if(*hdptr==0)
    {
        *hdptr= newOne;
    }else{
        temp=*hdptr;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next= newOne;
        newOne->pre=temp;
        newOne->next=*hdptr;
       
    }
}
void printLinkedList(struct Node *hdptr)
{
    printf("Log: printLinkedList called.\n");
    struct Node *ptr;
    ptr=hdptr;
    while(ptr)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}