#include<stdio.h>
typedef struct treenode
{
 int data;
 struct treenode *left;
  struct treenode *right;
}treenode;
treenode* newnode(int v)
{
 treenode *t=(treenode*)malloc(sizeof(treenode));
 t->data=v;
 t->left=t->right=NULL;
 return t;
}
void inorder(treenode *t)
{
 if(t==NULL)
    return NULL;
 inorder(t->left);
 printf("%d ",t->data);
 inorder(t->right);
}
treenode* mirror(treenode *t)
{
 if(t==NULL)
    return t;
 mirror(t->left);
 mirror(t->right);
 treenode *temp=t->left;
 t->left=t->right;
 t->right=temp;
 return t;
}
int main()
{
treenode *t=NULL;
t=newnode(5);
t->left=newnode(3);
t->right=newnode(6);
t->left->left=newnode(1);
t->left->right=newnode(4);
inorder(t);
printf("\n");
struct node *tt;
tt=mirror(t);
inorder(tt);
return 0;
}
