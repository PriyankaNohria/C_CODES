#include<stdio.h>
struct node
{
 int data;
 struct node *next;
};
void push(struct node **h,int d)
{
 struct node *n=(struct node*)malloc(sizeof(struct node));
 n->data=d;
 n->next=*h;
 *h=n;
}
void pop(struct node **h)
{
 struct node *r;
 r=*h;
 *h=r->next;
}
int isEmpty(struct node *h)
{
  if(h==NULL)
    return 1;
  else
    return 0;
}
int top(struct node *h)
{
   return h->data;
}
int* histogram(int* A,int n)
{
  struct node *stack=NULL;
  int i=0,j=0;
  int *res=(int*)malloc(sizeof(int)*n);
  while(i<n)
  {
    if(isEmpty(stack)||A[i]>A[top(stack)])
    {
      if(isEmpty(stack))
      {
        res[j++]=-1;
      }
      else
      {
        res[j++]=A[top(stack)];
      }
      push(&stack,i++);
    }
    else
    {
      while(!isEmpty(stack)&&A[i]<=A[top(stack)])
        pop(&stack);
    }
  }
  return res;
}
int main()
{
 int n,i;
 scanf("%d",&n);
 int *a=(int*)malloc(sizeof(int)*n);
 int *res=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 res=histogram(a,n);
 for(i=0;i<n;i++)
 printf("%d ",res[i]);
 return 0;
}
