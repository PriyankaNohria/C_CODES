#include<stdio.h>
typedef struct treenode
{
 int val;
 struct treenode *left;
 struct treenode *right;
}treenode;
treenode* newnode(int v)
{
  treenode *t=(treenode*)malloc(sizeof(treenode));
  t->val=v;
  t->left=t->right=NULL;
  return t;
}
int lca(treenode *t,int x,int y)
{
    if(t==NULL)
        return 0;
     if(t->val==x||t->val==y)
        return t;
    treenode *x1=lca(t->left,x,y);
    treenode *y1=lca(t->right,x,y);
    if(x1&&y1)
        return t;
    else if(x1)
        return x1;
    else if(y1)
        return y1;
    else
        return NULL;
}
int main()
{
 int n,i,len;
 treenode *t=newnode(5);
 t->left=newnode(3);
 t->left->right=newnode(4);
 t->left->left=newnode(2);
 t->right=newnode(6);
 treenode *tt;
 tt=lca(t,2,4);
    printf("%d",tt->val);
 return 0;
}
