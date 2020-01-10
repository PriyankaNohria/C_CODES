#include<stdio.h>
int sum(int,int);
int reverse(int,int);
int main()
{
int num1,num2,result;
scanf("%d%d",&num1,&num2);
result=sum(num1,num2);
printf("%d\n",result);
result=reverse(num1,num2);
printf("%d",result);
return 0;
}
int sum(int num1,int num2)
{
int result=num1+num2;
return result;
}
int reverse(int num1,int num2) {
int rem,sum,result=0;
sum=num1+num2;
while(sum!=0) {
rem=sum%10;
result=(result*10)+rem;
sum=sum/10;
}
return result;
}
