#include<stdlib.h>
#include<stdio.h>
int top=-1;
void push(int ar[], int ele)
{
if(top==49)
{
    printf("Stack over flow");
}
else{
    top=top+1;
    ar[top]=ele;
}
}
void printli(int ar[])
{
    int i;
if(top==49)
{
    printf("Stack is Full");

}
else if(top==-1)
{
    printf("Stack is empty");
}
else{
    for(i=0;i<top;i++)
    {
        printf("%d",ar[i]);
    }
}
}
void pop(int ar[])
{
if(top==-1)
{
    printf("Stack is empty");
}else{

    top-- ;
}
}
int main()
{
    int ar[50],ch,ele;
    while(1)
    {
        printf("\n1)PUSH\n2)POP\n3)PRINT STACK\n4)EXIT\nEnter your Choice");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter the element you want to insert to stack");
            scanf("%d",&ele);
            push(ar,ele);
        }
        else if(ch==2)
        {
            //ele=pop(ar);
            pop(ar);

        }
        else if (ch==3)
        {
            printli(ar);
        }
        else
        break;


    }
}
