#include<stdio.h>
int main()
{
int num=0;
int n=0;//nth bit
int bitstatus=0;
printf("enter num");
scanf("%d",&num);
printf("enter bit");
scanf("%d",&n);
bitstatus=(num>>n)&1;
if(bitstatus)
{
printf("bit is on");
}
else
{
printf("bit is off");
}
return 0;
}
