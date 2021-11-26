/*********************************
Name=Mansi jalindar gawade_IT_SY
**********************************/
#include<stdio.h>
int Q[100],Front = -1, Rear = -1,i,n,x,choice;
void insert();
void delete();
void Display();
void main()
{
   printf("\t Welcome to implementation of Queue using array\n");
    printf("enter the size of Queue:");
    scanf("%d",&n);
    do
    {
        printf("\n Queue Operation available: \n");
        printf("\t1. insert \t2.delete  \t3.Display \t4. Exit \n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            Display();
        case 4:
            printf("exit: program finished !!");
            break;
        default:
            printf("please enter a valid choice 1,2, 3, 4, 5 \n");
            break;
        }
    } while(choice!=4);
}
void insert()
{
    if(Rear>=n-1)
    {
        printf("Queue overflow ! \n");
    }
    else
    {
        printf("enter the element to insert:");
        scanf("%d",&x);
        Rear++;
        Q[Rear]=x;
        if(Front==-1)
            Front=0;
    }
}
void delete()
{
    if(Front==-1)
    {
        printf("Queue underflow");
    }
    else
    {
        printf("the deleted element is :%d\n ",Q[Front]);
        if(Front==Rear)
            Front=Rear=-1;
        else
            Front++;

    }
}

void Display()
{
    if(Rear<0)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("the element in the Queue are:");
        for(i=Front;i<n;i++)
        {
            printf("\t%d\t",Q[i]);
        }
        printf("/t");    }
}
