#include<stdio.h>
int main()
{
int num,bin=0,rem,i=0;
printf("enter the number : ");
scanf("%d",&num);//7
while(num!=0)
{
rem=num%2;//1//1//1
bin=bin+(rem*pow(10,i));//1//11//111
num=num/2;//3//1//0
i++;
}
printf("the binary number is :%d",bin);//111
return 0;
}
