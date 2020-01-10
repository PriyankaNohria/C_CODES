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
void pop(struct node **h)
{
 struct node *r=(struct node*)malloc(sizeof(struct node));
 r=*h;
 *h=r->next;
 free(r);
}
int street(int* A,int n)
{
 struct node *stack=NULL;
 int i=0,last=1,tp;
 for(i=0;i<n;i++)
 {
  if(!isEmpty(stack)&&top(stack)==last)
  {
    pop(&stack);
    last++;
  }
  else if(A[i]==last)
    last++;
  else if(!isEmpty(stack)&&top(stack)<A[i])
    return 0;
  else
    push(&stack,A[i]);
 }
 return 1;
}
int main()
{
int n,i;
scanf("%d",&n);
while(n!=0)
{
int *a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
int res=street(a,n);
printf("%d\n",res);
scanf("%d",&n);
}
return 0;
}
