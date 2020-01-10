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
int oddevendiff(treenode *t)
{
   if(t==NULL)
      return 0;
   return t->val-oddevendiff(t->left)-oddevendiff(t->right);
}
int main()
{
treenode *t=newnode(5);
t->left=newnode(3);
t->left->right=newnode(4);
t->left->left=newnode(2);
t->left->left->left=newnode(1);
t->right=newnode(6);
int res=oddevendiff(t);
printf("%d",res);
return 0;
}
