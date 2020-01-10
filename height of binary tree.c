
#include<stdio.h>
typedef struct treenode
{
int val;
struct treenode *left;
struct treenode *right;
}treenode;
treenode* create(int v)
{
 treenode *t=(treenode*)malloc(sizeof(treenode));
 t->val=v;
 t->left=t->right=NULL;
 return t;
}
int max(int a,int b)
{
 if(a>b)
  return a;
 else
  return b;
}
int height(treenode *A)
{
 if(A==NULL)
 return 0;
 else
    return 1+max(height(A->left),height(A->right));
}
int main()
{
 treenode *t=create(5);
 t->left=create(4);
 t->right=create(3);
 t->left->left=create(2);
 t->left->right=create(1);
 int p=height(t);
printf("%d ",p);
 return 0;
}
