#include<stdio.h>
int main()
{
int num,fact=1,i;
scanf("%d",&num);
for(i=num;i>=1;i--)
{
fact=fact*i;
}
int digits=0;
while(fact!=0)
{
digits++;
fact=fact/10;
}
printf("%d",digits);
return 0;
}
