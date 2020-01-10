#include<stdio.h>
void main()
{
int a=0;
printf("enter a");
scanf("%d",&a);
if((a%11==0)&&(a%5==0))
{
printf("CONDITION IS SATISHFIED");
}
else
{
printf("CONDITION IS NOT SATISHFIED");
}
return 0;
}
