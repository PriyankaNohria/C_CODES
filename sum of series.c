#include<stdio.h>
int main()
{
int num,NUMI,DENO;
float f,sum=0.0,i;
printf("enter the value of num : ");
scanf("%d",&num);
for(i=1;i<=num;i=i+1)  {
NUMI=(float)pow(i,i);
DENO=(float)i;
f=NUMI/DENO;
sum=sum+f;
}
printf("%.2f",sum);
return 0;
}
