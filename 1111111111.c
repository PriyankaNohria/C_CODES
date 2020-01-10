#include<stdio.h>
void main()
{
int a,b;
char choice=0;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("choice=='+' for addition\nchoice=='-' for subtraction\nchoice=='*' for multiplication\nchoice=='/' for division");
scanf(" %c",&choice);
if(choice=='+')
{
printf("result=%d",a+b);
}
else if(choice=='-')
{
if(a>b)
{
printf("result=%d",a-b);
}
if(b>a)
{
printf("result=%d",b-a);
}
}
else if(choice=='*')
{
printf("result=%d",a*b);
}
else if(choice=='/')
{
printf("result=%d",a/b);
}
return 0;
}

