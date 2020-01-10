#include<stdio.h>
int GCD(int,int);
int main()
{
int num1,num2,res;
printf("enter the value of num1 : ");
scanf("%d",&num1);
printf("enter the value of num2 : ");
scanf("%d",&num2);
res=GCD(num1,num2);
printf("%d",res);
return 0;
}
int GCD(int x,int y)
{
int rem;
rem=x%y;
if(rem==0) {
return y;
}
else {
return (GCD(y,rem));
}
}
