#include<stdio.h>
int main()
{
int num;
int digits=0;
scanf("%d",&num);
while(num!=0)
{
digits++;
num=num/10;
}
printf("%d",digits);
return 0;
}
