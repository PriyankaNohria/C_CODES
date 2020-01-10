#include<stdio.h>
int main()
{
int a1[50][50],a2[50][50],a3[50][50];
int r1,r2,c1,c2;
scanf("%d%d",&r1,&c1);
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
scanf("%d",&a1[i][j]);
}
}
printf("**********************\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
printf("%d\t",a1[i][j]);
}
printf("\n");
}
scanf("%d%d",&r2,&c2);
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
scanf("%d",&a2[i][j]);
}
}
printf("**********************\n");
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
printf("%d\t",a2[i][j]);
}
printf("\n");
}
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
a3[i][j]=0;
for(int k=0;k<c2;k++)
{
a3[i][j]=(a1[i][k]*a2[k][j])+a3[i][j];
}
}
}
printf("**********************\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
printf("%d\t",a3[i][j]);
}
printf("\n");
}
return 0;
}
