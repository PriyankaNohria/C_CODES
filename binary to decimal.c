#include<stdio.h>//binary to decimal
int main()
{
int num=0,rem,deci=0,i=0;
printf("enter the binary number");
scanf("%d",&num);//111
while(num!=0)
{
rem=num%10;//1//1//1
deci=deci+(rem*pow(2,i));//1//2//4
num=num/10;//11//1//0
i++;
}
printf("The decimal number is : %d",deci);//7
return 0;
}
