#include<stdio.h>
struct Arraystack
{
 int top;
 int capacity;
 int *arr;
};
struct Arraystack* create(int cap)
{
 struct Arraystack *stack;
 stack=(struct Arraystack*)malloc(sizeof(struct Arraystack));
 stack->capacity=cap;
 stack->top=-1;
 stack->arr=(int*)malloc((stack->capacity)*sizeof(int));
 return stack;
}
int isEmpty(struct Arraystack *s)
{
 if(s->top==-1)
        return 1;
 else
    return 0;
}
int isFull(struct Arraystack *s)
{
 if(s->top==(s->capacity-1))
        return 1;
 else
    return 0;
}
void push(struct Arraystack *s,int data)
{
    if(!isFull(s))
    {
        s->top++;
        s->arr[s->top]=data;
    }
}
int pop(struct Arraystack *s)
{
    int x;
  if(!isEmpty(s))
  {
   x=s->arr[s->top];
   s->top--;
   return x;
  }
  return -1;
}
int main()
{
int choice,res,item;
struct Arraystack *stack;
stack=create(4);
while(1)
{
printf("1.push\n");
printf("2.pop\n");
printf("3.Exit\n");
printf("4.Enter the Choice : \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("Enter the Value : \n");
    scanf("%d",&item);
    push(stack,item);
    break;
case 2:
    res=pop(stack);
    if(res==-1)
        printf("Empty\n");
    else
        printf("POP value is : %d\n",res);
    break;
case 3:
    exit(0);
}
}
return 0;
}
