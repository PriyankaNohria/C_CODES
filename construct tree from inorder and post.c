#include<stdio.h>
typedef struct tree
{
 int val;
 struct tree *left;
 struct tree *right;
}treenode;
treenode* newnode(int d)
{
 treenode *t=(treenode*)malloc(sizeof(treenode));
 t->val=d;
 t->left=NULL;
 t->right=NULL;
 return t;
}
treenode* tree(int in[],int post[],int start,int end,int *pindex)
{
  if(start>end)
    return NULL;
  treenode* t=newnode(post[*pindex]);
  (*pindex)--;
  if(start==end)
    return t;
  int Iindex=search(in,start,end,t->val);
  t->right=tree(in,post,Iindex+1,end,pindex);
  t->left=tree(in,post,start,Iindex-1,pindex);
  return t;
}
int search(int in[],int l,int r,int d)
{
  int i;
  for(i=l;i<=r;i++)
  {
    if(in[i]==d)
        break;
  }
  return i;
}
treenode* print(int in[],int post[],int n)
{
  int pindex=n-1;
  return tree(in,post,0,n-1,&pindex);
}
void preorder(treenode *t)
{
  if(t==NULL)
   return;
  printf("%d ",t->val);
  preorder(t->left);
  preorder(t->right);
}
int main()
{
 int in[]={2,5,8,15,20,30,32,35};
 int post[]={2,8,5,20,32,35,30,15};
 treenode* t=(in,post,8);
 preorder(t);
 return 0;
}
