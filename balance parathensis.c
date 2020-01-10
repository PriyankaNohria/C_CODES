
#include<stdio.h>
struct node
{
  char data;
  struct node *next;
};
void push(struct node** h,char d)
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
int balance(char* str)
{
    struct node *stack=NULL;
  int i=0;
  while(str[i])
  {
    if(str[i]=='{'||str[i]=='['||str[i]=='(')
        push(&stack,str[i]);
    else if(str[i]=='}'||str[i]==']'||str[i]==')')
    {
       if(isEmpty(stack))
            return 0;
       else if(top(stack)=='{'&&str[i]=='}'||top(stack)=='('&&str[i]==')'||top(stack)=='['&&str[i]==']')
            pop(&stack);
       else
        return 0;
    }
    i++;
  }
  if(isEmpty(stack))
    return 1;
  else
    return 0;
}
int main()
{
  char *str=(char*)malloc(sizeof(char));
  gets(str);
  int res=balance(str);
  if(res==1)
    printf("Balanced");
  else
    printf("Not Balanced");
  return 0;
}
