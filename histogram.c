#include<stdio.h>
struct node
{
  int data;
  struct node *next;
};
void push(struct node** h,int d)
{
  struct node *n=(struct node*)malloc(sizeof(struct node));
  n->data=d;
  n->next=*h;
  *h=n;
}
int isEmpty(struct node* h)
{
 if(h==NULL)
    return 1;
 else
    return 0;
}
int top(struct node* h)
{
    return h->data;
}
void pop(struct node** h)
{
 struct node *r;
 int item=(*h)->data;
 r=*h;
 *h=r->next;
 free(r);
}
int Area(int *A,int n1)
{
    struct node *stack=NULL;
  int i=0,area,tp,max=0;
  while(i<n1)
  {
    if(isEmpty(stack) || A[top(stack)] <= A[i])
        push(&stack,i++);
    else
    {
       tp=top(stack);
       pop(&stack);
       area = A[tp] * ( isEmpty(stack) ? i : i - top(stack) - 1 );

       if(max<area)
        max=area;
    }
  }
  while(!isEmpty(stack))
        {
       int tp=top(stack);
       pop(&stack);
       area = A[tp] * ( isEmpty(stack) ? i : i - top(stack) - 1 );

       if(max<area)
        max=area;
        }
  return max;
}
int main()
{
   int i,n;
   scanf("%d",&n);
  int *arr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int res=Area(arr,n);
    printf("%d",res);
  return 0;
}
