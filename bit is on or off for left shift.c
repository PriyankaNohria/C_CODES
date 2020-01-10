#include<stdio.h>
int main()
{
int num=0;
int n=0;
int bitstatus=0;
printf("enter num");
scanf("%d",&num);
printf("enter n");
scanf("%d",&n);
bitstatus=(num<<n)|1;
if(bitstatus)
{
printf("ON");
}
else
{
printf("OFF");
}
return 0;
}

