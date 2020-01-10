#include<stdio.h>
int main()
{
int num=0;//12345
int rem,sum;
scanf("%d",&num);
sum=num;
while(sum>0)//12345//15
{
while(num!=0)//12345//1234//123//12//1//15//1
{
sum=0;
rem=num%10;//5//4//3//2//1//5//1
sum=sum+rem;//5+4+3+2+1//15//5+1
num=num/10;//1234//123//12//1//0//1//0
}
}
printf("%d",sum);
return 0;
}
