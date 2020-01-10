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
int* smallest(int *A,int n1,int *len)
{
    struct node *stack=NULL;
    int *arr=(int*)malloc(n1*sizeof(int*));
  int i=0,j=0,tp;
  while(i<n1)
  {
    if(isEmpty(stack)||A[i]<A[top(stack)])
    {
        push(&stack,i++);
            arr[j]=1;
    }
    else
    {
        int count=1;
        int k=j-1;
        while(!isEmpty(stack) && A[i]>=A[top(stack)] && k>0)
        {
            tp=top(stack);
            pop(&stack);
            count=count+arr[tp];
            k--;
        }
        push(&stack,i++);
        arr[j]=count;
    }
    j++;
  }
  *len=n1;
  return arr;
}
int main()
{
   int i,n,*len=0;
   scanf("%d",&n);
  int *arr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int *res=smallest(arr,n,&len);
  for(i=0;i<n;i++)
    printf("%d ",res[i]);
  return 0;
}

