
//stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;

}*top=NULL;
void push(int ele)
{   struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Stack overflow");
        //exit(1);
    }
    else
    {
        newnode->data=ele;
        newnode->link=top;
        top=newnode;
    }
}
void print()
{
struct node* temp=NULL;
temp=top;
while(temp)
{
printf("%d",temp->data);
temp=temp->link;
printf("\n");
}
}
void pop()
{
struct node* temp;
temp=top;
top=top->link;
free(temp);
temp=NULL;
}
int main()
{
    int ch,ele;
    while(1)
    {
        printf("Enter your choice");
        printf("\n1)push\n2)print\n3)pop");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter the Element you want to Enter");
            scanf("%d",&ele);
            push(ele);
        }
        else if(ch==2)
        {
        print();
        }
        else if(ch==3)
        {
        pop();
        }
        else{
        exit(1);
        }
    }
    return 0;
}
