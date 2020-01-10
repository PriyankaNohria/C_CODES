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
treenode* create(int v)
{
 treenode *t=(treenode*)malloc(sizeof(treenode));
 t->val=v;
 t->left=t->right=NULL;
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
  struct node *r=*h;
  treenode *t;
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
treenode* top(struct node *h)
{
  if(h==NULL)
    return NULL;
  else
    return h->data;
}
int* postorder(treenode *A,int *len)
{
 struct node *stack=NULL;
 treenode *curr=A,*temp=NULL;
 int *arr=(int*)malloc(sizeof(int)*100);
 int i=0;
 while(curr||!isEmpty(stack))
 {
   while(curr)
   {
     push(&stack,curr);
     curr=curr->left;
   }
   temp=top(stack);
   if(temp->right==NULL)
   {
     arr[i++]=temp->val;
     pop(&stack);
     while(!isEmpty(stack)&&top(stack)->right==temp)
     {
       temp=top(stack);
       pop(&stack);
       arr[i++]=temp->val;
     }
     if(!isEmpty(stack))
       curr=top(stack)->right;
   }
   else
    curr=temp->right;
 }
 *len=i;
 return arr;
}
int main()
{
 treenode *t=create(5);
 t->left=create(4);
 t->right=create(3);
 t->left->left=create(2);
 t->left->right=create(1);
 int i,len;
 int *p=(int*)malloc(sizeof(int)*100);
 p=postorder(t,&len);
 for(i=0;i<len;i++)
  printf("%d ",p[i]);
 return 0;
}

