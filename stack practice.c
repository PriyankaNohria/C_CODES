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
int pop(struct node** h)
{
 struct node *r;
 int item=(*h)->data;
 r=*h;
 *h=r->next;
 free(r);
 return item;
}
int main()
{
   struct node *stack=NULL;
    int i,no;
  for(i=0;i<4;i++)
  {
    printf("Enter the Number : ");
    scanf("%d",&no);
    push(&stack,no);
  }
  for(i=0;i<4;i++)
  {
    int res=pop(&stack);
    printf("%d\n",res);
  }
  return 0;
}
