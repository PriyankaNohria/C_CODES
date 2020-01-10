#include<stdio.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node* newnode(int val)
{
struct node *t=(struct node*)malloc(sizeof(struct node));
 t->data=val;
 t->left=t->right=NULL;
 return t;
}
struct node* insert(struct node *t,int val)
{
 if(t==NULL)
    return newnode(val);
  if(val<t->data)
   t->left=insert(t->left,val);
 else
    t->right=insert(t->right,val);
 return t;
}
int ceil(struct node *t,int k)
{
if(t==NULL)
 return -1;
 if(t->data==k)
    return t->data;
else if(t->data<k)
   return ceil(t->right,k);
int c=ceil(t->left,k);
return (c>=k)?c:t->data;
}
int main()
{
struct node *root=NULL;
root=insert(root,5);
root=insert(root,3);
root=insert(root,2);
root=insert(root,4);
root=insert(root,9);
root=insert(root,7);
printf("%d",ceil(root,1));
printf("\n");
return 0;
}

