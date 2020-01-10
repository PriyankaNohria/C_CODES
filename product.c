#include<stdio.h>
int main()
{
int num=0,product=1;
scanf("%d",&num);
while(num!=0)//57
{
num=num%10;//7//5
product=product*num;//7//35
num=num/10;//5//0
}
printf("%d",product);
return 0;
}
