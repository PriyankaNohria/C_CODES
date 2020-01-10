#include<stdio.h>
int main()
{
int num=0;
int first,last;
scanf("%d",&num);//123
last=num%10;//3
while(num!=0)
{
num=num/10;//12
first=num/10;//1
num=first/10;//0
}
printf("%d%d",first,last);
return 0;
}
