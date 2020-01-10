#include<stdio.h>
int main()
{
int num,first=0,second=1,sum=0;
scanf("%d",&num);
printf("%d\t%d\t",first,second);
for(int i=0;i<=num-2;i++)
{
sum=first+second;
printf("%d\t",sum);
first=second;
second=sum;
}
return 0;
}
