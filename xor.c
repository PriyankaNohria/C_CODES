#include<stdio.h>
int main()
{
int num=0;
int n=0;
int bitstatus=0;
scanf("%d%d",&num,&n);
bitstatus=num^(1<<n);
if(bitstatus)
{
printf("on");
}
else
{
printf("off");
}
return 0;
}
