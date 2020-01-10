#include<stdio.h>
int main()
{
int num,fact=1,i;
printf("enter number : ");
scanf ("%d",&num);//5
for(i=1;i<=num;i++)
{
fact=fact*i;//1//2//6//24//120
}
printf("The factorial of %d is : %d",num,fact);
return 0;
}
