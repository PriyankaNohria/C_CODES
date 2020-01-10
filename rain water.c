
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
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int trap(int *A,int n1)
{
    struct node *stack=NULL;
  int i=0,area=0,tp,d,h;
  while(i<n1)
  {
    while((!isEmpty(stack)) && (A[i]>A[top(stack)]))
    {
      tp=top(stack);
      pop(&stack);
      d=isEmpty(stack) ? i : (i-1-top(stack));

      if(!isEmpty(stack))
      h=min(A[i],A[top(stack)])-A[tp];

      else
      h=0;

      area += d*h;
    }
    push(&stack,i++);
  }
  return area;
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
  int res=trap(arr,n);
    printf("%d",res);
  return 0;
}

