#include<stdio.h>
int main()
{
int num,rem,bin=0,i=0;
scanf("%d",&num);
while(num!=0)
{
rem=num%16;
bin=rem*pow(10,i)+bin;
num=num/16;
i++;
}
printf("%d",bin);
return 0;
}
