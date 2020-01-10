#include<stdio.h>
int main()
{
int num,n=0,ans=0,choice=0,rem;
scanf("%d",&num);//153
choice=num;
while(num!=0)//153//15//1
{
num=num/10;//15//1//0
n++;//1+1+1=3
}
num=choice;
while(num!=0)//153//15
{
rem=num%10;//3//5//1
ans=ans+(rem*rem*rem);//3^3+5^3+1^3
num=num/10;//15//1//0
}
num=choice;
if(num==ans) {
printf("Armstrong Number");
}
else {
printf("not an Armstrong Number");
}
return 0;
}
