#include<stdio.h>
int main()
{
int num,sum;
int rem;
printf("enter num");
scanf("%d",&num);
while(sum>9)
{
num=sum;
while(num!=0)
{
sum=0;
rem=num%10;
sum=sum+rem;
num=num/10;
}
}
printf("the singleton is = %d",sum);
return 0;
}
