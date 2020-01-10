#include<stdio.h>
int main()
{
int year=0;
printf("enter year");
scanf("%d",&year);
if((year%4)||(year%100))
{
if(year%400)
printf("LEAP YEAR");
}
else
{
printf("NOT LEAP YEAR");
}
return 0;
}
