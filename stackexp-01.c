/*********************************
Name=Mansi jalindar gawade_IT_SY
**********************************/
#include<stdio.h>
int Stk[100],Top = -1, i,n,x,choice;
void push();
void pop();
void peep();
void Display();
void main()
{
   printf("\t Welcome to implementation of stack using array");
    printf("enter the size of Queue:");
    scanf("%d",&n);
    do
    {
        printf("\n stack Operation available: \n");
        printf("\t1. push \t2. pop \t3.peep \t4.Display \t5. Exit \n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            Display();
        case 5:
            printf("exit: programm finished !!");
            break;
        default:
            printf("please enter a valid choice 1,2, 3, 4, 5 \n");
            break;
        }
    } while(choice!=4);
}
void push()
{
    if(Top>=n-1)
    {
        printf("Stack overflow ! \n");
    }
    else
    {
        printf("enter the element to push:");
        scanf("%d",&x);
        Top++;
        Stk[Top]=x;
    }
}
void pop()
{
    if(Top<=0)
    {
        printf("stack underflow");
    }
    else
    {
        printf("the poped element is :%d\n ",Stk[Top]);
        Top--;

    }
}
void peep()
{
    printf("enter the position of  element from the top which you want to peep:");
    scanf("%d",&i);
    if(Top-i+1<0)
    {
        printf("stack is underflow!!");
    }
    else
    {
        printf("the %d element from the top is:%d",i,Stk[Top-i+1]);
    }
}
void Display()
{
    if(Top<0)
    {
        printf("Stack is empty!!");
    }
    else
    {
        printf("the element in the stack are:");
        for(i=Top;i>-1;i--)
        {
            printf("\n %d \n",Stk[i]);
        }
    }
}
