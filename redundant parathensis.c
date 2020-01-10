#include<stdio.h>
struct node
{
 char data;
 struct node *next;
};
void push(struct node **h,char d)
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
 struct node *r;
 r=*h;
 *h=r->next;
}
int balanced(char *str)
{
 struct node *stack=NULL;
 int i=0,flag=0;
 while(str[i])
 {
  if(str[i]==')')
    {
     char tp=top(stack);
     pop(&stack);
     flag=1;
     while(tp!='(')
     {
       if(tp=='+'||tp=='-'||tp=='*'||tp=='/')
       {
         flag=0;
       }
       tp=top(stack);
       pop(&stack);
     }
     if(flag==1)
        return 1;
    }
    else
     push(&stack,str[i]);
    i++;
 }
}
int main()
{
 char str[50];
 scanf("\n%[^\n]",str);
int res=balanced(str);
if(res==1)
 printf("Redundant");
else
 printf("Not Redundant");
 return 0;
}
