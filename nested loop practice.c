#include<stdio.h>
int main()
{
int i,j,num;
scanf("%d",&num);
for(i=1;i<=num;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
printf("%d",j);
}
printf("\n");
}
}
