#include<stdio.h>
#include<stdlib.h>
int rear=-1;
int front=-1;
void push(int ar[])
{
int ele;
if(rear==19)
{
printf("Queue is full");
}else{
if(front==-1)
{
front=0;
}
printf("Enter the number you want to insert");
scanf("%d",&ele);
rear=rear+1;
ar[rear]=ele;
}
}

void pop()
{
if(front=-1||front>rear)
{
printf("Queue is empty");
}else
{
front=front+1;
}
}
void print(int ar[])
{
int i;
if(front==-1)
{
printf("Queue is empty");
}
else{
for(i=front;i<=rear;i++)
{
printf("\n %d",ar[i]);
}
}
}
int main()
{
int ar[20],ch;
while(1)
{
printf("\nEnter the choice\n********************\n1)push\n2)pop\n3)print\n4)exit\n\n");
scanf("%d",&ch);
/*switch(ch)
{
    case 1:
        push(ar);
        break;
    case 2:
        pop();
        break;
    case 3:
        print(ar);
        break;
    case 4:
        exit(1);
    default:
        printf("\nEnter the correct choice\n");
}*/
if(ch==1)
{
push(ar);
}
else if(ch==2)
{
pop();
}
else if(ch==3)
{
print(ar);
}else{
exit(1);
}
}
}
