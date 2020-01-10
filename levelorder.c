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
void printlevelorder(treenode *A)
{
 int h=height(A);
 int i;
 for(i=1;i<=h;i++)
     printlevel(A,i);
}
void printlevel(treenode *A,int level)
{
  if(A==NULL)
     return;
  if(level==1)
   printf("%d ",A->val);
  else if(level>1)
  {
   printlevel(A->left,level-1);
   printlevel(A->right,level-1);
  }
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
 t->left=create(3);
 t->right=create(4);
 t->left->left=create(2);
 t->left->right=create(1);
 printf("Level Order : ");
 printlevelorder(t);
 return 0;
}

