#include<stdio.h>
typedef struct tree{
int val;
struct tree *left;
struct tree *right;
}treenode;

typedef struct node{
treenode *data;
struct node *next;
}node;

treenode*  newnode(int v)
{
 treenode *t=(treenode*)malloc(sizeof(treenode));
 t->val=v;
 t->left=t->right=NULL;
 return t;
}

void push(node **h,treenode *t)
{
 node *n=(node*)malloc(sizeof(node));
 n->data=t;
 n->next=*h;
 *h=n;
}
treenode* pop(node **h)
{
 node *r;
 treenode *t;
 r=*h;
 t=r->data;
 *h=r->next;
 return t;
}
int isEmpty(node *n)
{
 if(n==NULL)
    return 1;
 else
    return 0;
}
treenode* top(treenode *t)
{
 return t->val;
}
void inorder(treenode *t)
{
 if(t==NULL)
    return 0;
 inorder(t->left);
 inorder(t->right);
 printf("%d ",t->val);
}
int main()
{
treenode *t=newnode(5);
t->left=newnode(3);
t->left->right=newnode(4);
t->left->left=newnode(2);
t->left->left->left=newnode(1);
t->right=newnode(6);
inorder(t);
return 0;
}
