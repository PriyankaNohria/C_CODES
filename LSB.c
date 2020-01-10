#include<stdio.h>//programme to check the status of LSB
int main()
{
int a=0;
printf("enter a");
scanf("%d",&a);
if(a&1==1)
{
printf("LSB ON");
}
else
{
printf("LSB OFF");
}
return 0;
}
