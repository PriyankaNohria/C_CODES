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
int find(treenode *A,int ele)
{
 if(A==NULL)
 return 0;
 else if(A->val==ele)
  return 1;
 else
    return find((A->left),ele)||find((A->right),ele);
}
int main()
{
 treenode *t=create(5);
 t->left=create(4);
 t->right=create(3);
 t->left->left=create(2);
 t->left->right=create(1);
 int n;
 printf("Which element you want to Search : ");
 scanf("%d",&n);
 int p=find(t,n);
if(p==0)
    printf("Element does not exist");
else
    printf("Element exist");
 return 0;
}
