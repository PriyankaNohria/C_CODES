#include<stdio.h>
int main()
{
int num,n,power=1,i;
printf("Enter the number");
scanf("%d",&num);//2
printf("Enter the power of number");
scanf("%d",&n);//5
for(i=1;i<=n;i++)
{
power=power*num;
}
printf("%d raised to power %d is = %d",num,n,power);
return 0;
}
