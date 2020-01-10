#include<stdio.h>
int main()
{
int a[50][50],a1[50][50],n;
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
printf("%d",a[i][j]);
}
printf("\n");
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
a1[i][j]=a[j][i];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
printf("%d",a1[i][j]);
}
printf("\n");
}
return 0;
}
