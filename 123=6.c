#include<stdio.h>
int main()
{
int num=0;
int sum=0;
int rem;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("%d",sum);
return 0;
}
