#include<stdio.h>
typedef struct treenode
{
 int val;
struct treenode *left;
 struct treenode *right;
}treenode;
struct node
{
  treenode *data;
  struct node *next;
};
treenode* newnode(int d)
{
  treenode *t=(treenode*)malloc(sizeof(treenode));
  t->val=d;
  t->left=NULL;
  t->right=NULL;
  return t;
}
void push(struct node **h,treenode *t)
{
  struct node *n=(struct node*)malloc(sizeof(struct node));
  n->data=t;
  n->next=*h;
  *h=n;
}
treenode* pop(struct node **h)
{
  struct node *r;
  treenode *t;
  r=*h;
  t=r->data;
  *h=r->next;
  return t;
}
int isEmpty(struct node *h)
{
  if(h==NULL)
    return 1;
  else
    return 0;
}
int* inorder(treenode* A,int *len)
{
  treenode *curr=A,*temp=NULL;
  struct node *stack=NULL;
  int i=0;
  int *arr=(int*)malloc(100*sizeof(int));
  while(curr||!isEmpty(stack))
  {
    while(curr)
    {
      push(&stack,curr);
      curr=curr->left;
    }
    temp=pop(&stack);
    arr[i++]=temp->val;
    curr=temp->right;
  }
  *len=i;
  return arr;
}
int main()
{
  treenode *t=newnode(5);
  t->left=newnode(2);
  t->right=newnode(4);
  t->left->left=newnode(1);
  t->left->right=newnode(3);
  int *a=(int*)malloc(100*sizeof(int));
  int len,i;
  a=inorder(t,&len);
  for(i=0;i<len;i++)
        printf("%d ",a[i]);
  return 0;
}
