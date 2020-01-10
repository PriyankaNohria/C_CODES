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
treenode* lca(treenode *A,int x,int y)
{
 if(A==NULL)
 return NULL;
 else if(A->val==x||A->val==y)
    return A;
 treenode *x1=lca(A->left,x,y);
 treenode *y1=lca(A->right,x,y);
 if(x1&&y1)
   return A;
 else if(x1)
    return x1;
 else if(y1)
  return y1;
  else
    return NULL;
}
int main()
{
treenode *t=create(5);
t->left=create(4);
t->right=create(3);
t->left->left=create(2);
t->left->right=create(1);
int x,y;
printf("value of x : ");
scanf("%d",&x);
printf("value of y : ");
scanf("%d",&y);
treenode *p=lca(t,x,y);
printf("%d",p->val);
return 0;
}
