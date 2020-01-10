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
void inorder(struct node *t)
{
 if(t!=NULL)
 {
  inorder(t->left);
  printf("%d ",t->data);
  inorder(t->right);
 }
}
struct node* minvalue(struct node *t)
{
 struct node *curr=t;
 while(curr&&curr->left)
 {
  curr=curr->left;
 }
 return curr;
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
struct node* deletenode(struct node *t,int k)
{
 if(t==NULL)
    return NULL;
 else if(k>t->data)
    t->right=deletenode(t->right,k);
 else if(k<t->data)
    t->left=deletenode(t->left,k);
 else
 {
   if(t->right==NULL)
    return t->left;
   if(t->left==NULL)
    return t->right;

struct node *tt=minvalue(t->right);
 t->data=tt->data;
 t->right=deletenode(t->right,tt->data);
 }
 return t;
}
int main()
{
struct node *root=NULL;
root=insert(root,50);
root=insert(root,30);
root=insert(root,20);
root=insert(root,40);
root=insert(root,70);
root=insert(root,60);
root=insert(root,80);
inorder(root);
printf("\n");
root=deletenode(root,20);
inorder(root);
printf("\n");
root=deletenode(root,30);
inorder(root);
printf("\n");
root=deletenode(root,50);
inorder(root);
return 0;
}
