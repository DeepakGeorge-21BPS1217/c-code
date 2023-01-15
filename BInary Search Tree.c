.#include<stdlib.h>
#include<stdio.h>
//in pp 2 >1> 3
struct node
{
int data;
struct node* right;
struct node* left;
};
void inorder(struct node*root)
{
if(root==NULL)
return;
else{
inorder(root->left);
printf("\t%d",root->data);
inorder(root->right);
}
}
void preorder(struct node* root)
{
if(root==NULL)
return;
else{
printf("\t%d",root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node* root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("\t%d",root->data);
}
struct node *crnode(int val)
{
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
struct node* inleft(struct node* root,int val)
{
root->left=crnode(val);
return root->left;
}
struct node* inright(struct node* root,int val)
{
root->right=crnode(val);
return root->right;
}
int main()
{
struct node* root=crnode(1);
inleft(root, 2);
inright(root, 3);
inleft(root->left,4);
inorder(root);
preorder(root);
postorder(root);
}

