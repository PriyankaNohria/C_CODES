#include<stdio.h>
int main()
{
int num,rem;
int reverse=0;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
reverse=(reverse*10)+rem;
num=num/10;
}
printf("%d",reverse);
return 0;
}
