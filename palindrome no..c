#include<stdio.h>
int main()
{
int num1,num2,digits=0,rem,reverse=0;
scanf("%d%d",&num1,&num2);
int temp=num1;
for(int i=num1;i<=num2;i++)
{
while(num1!=0)
{
rem=num1%10;
reverse=reverse*10+rem;
num1=num1/10;
}
if(temp==reverse)
{
digits++;
}
}
printf("%d",digits);
return 0;
}
