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
int ceil(treenode *root,int k)
{
 if(root==NULL)
     return NULL;
 if(root->val==k)
    return root->val;
 else if(root->val<k)
    return ceil(root->right,k);
 int f=ceil(root->left,k);
 return (f>=k)?f:root->val;
}
int main()
{
treenode *t=newnode(5);
t->left=newnode(3);
t->left->right=newnode(4);
t->left->left=newnode(2);
t->right=newnode(6);
int r=ceil(t,3);
printf("%d",r);
return 0;
}
