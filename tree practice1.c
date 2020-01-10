#include<stdio.h>
typedef struct tree
{
int leftSize;
 int data;
 struct tree *left,*right;
}treenode;
treenode* create(int v)
{
treenode *t=(treenode*)malloc(sizeof(treenode));
 t->data=v;
 t->left=t->right=NULL;
 t->leftSize=0;
 return t;
}
treenode* newNode(treenode *root,int v)
{
 if(!root)
  return create(v);
 if(v<=root->data){
    root->left=newNode(root->left,v);
    root->leftSize++;
 }
 else
    root->right=newNode(root->right,v);

    return root;
}
int getRank(treenode *root,int x)
{
 if(root->data==x)
        return root->leftSize;
 if(x<root->data)
 {
  if(!root->left)
     return -1;
  else
    return getRank(root->left,x);
 }
 else
 {
  if(!root->right)
     return -1;
  else
    {
     int rightSize=getRank(root->right,x);
     return root->leftSize+1+rightSize;
    }
}
}
int main()
{
treenode *t=NULL;
t=newNode(t,5);
t=newNode(t,3);
t=newNode(t,2);
t=newNode(t,1);
t=newNode(t,7);
t=newNode(t,6);
t=newNode(t,4);
int r=getRank(t,5);
printf("%d",r);
return 0;
}
