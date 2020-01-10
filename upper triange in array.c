#include<stdio.h>
int main()
{
int a[50][50],r,c,b=0;
scanf("%d%d",&r,&c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
} }
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(i>=j) {
printf("%d\t",a[i][j]);
}
else {
printf("%d\t",b);
}  }
printf("\n");
}
return 0;
}
