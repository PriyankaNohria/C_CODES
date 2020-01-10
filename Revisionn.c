#include<stdio.h>
int main()
{
int a[50][50],n,sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
sum=sum+a[i][j];
}
printf("%d\t",sum);
sum=0;
}
return 0;
}
