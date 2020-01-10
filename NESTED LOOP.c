#include<stdio.h>
int main()
{
int i,j;
int sum=0;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
j=sum+j;
printf("%d",j);
}
printf("\n");
}
return 0;
}
