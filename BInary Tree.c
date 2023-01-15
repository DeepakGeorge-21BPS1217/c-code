#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right;
}*root=NULL;

struct node*create(int val)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
void inorder(struct node* root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);
}
struct node* insert(struct node* node,int val)
{
if(node==NULL)
return create(val);
if(val<node->data)
{
node->left=insert(node->left,val);
}
else if(val>node->data)
{
node->right=insert(node->right,val);
}
return node;
}
int main()
{
struct node* root=NULL;
root=insert(root,50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
inorder(root);

}
