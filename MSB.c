#include<stdio.h>//program to check the MSB
int main()
{
int a=0;
printf("enter a");
scanf("%d",&a);
if(a&(1<<3)==8)
{
printf("ON");
}
else
{
printf("OFF");
}
return 0;
}
