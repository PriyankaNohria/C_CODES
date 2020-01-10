#include<stdio.h>
void main()
{
int a=0;
int b=0;
char choice=0;
int Result=0;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("press + for addition\npress - for subtraction\npress * for multiplication\npress / for division\n ");
scanf(" %c",&choice);
if(choice=='+')
{
printf("Result=%d",a+b);
}
else if(choice=='-')
{
if(a>b)
printf("Result=%d",a-b);
if(a<b)
printf("Result=%d",b-a);
}
else if(choice=='*')
{
printf("Result=%d",a*b);
}
else if(choice=='/')
{
printf("Result=%d",a/b);
}
printf("Result is%d",&Result);
return 0;
}

