#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j=0;
scanf("%d",&n);
int a[100][100];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
printf("********************\n");
for(i=0;i<n/2;i++)
{
 for(j=i;j<n-i-1;j++)
 {
   int temp=a[i][j];
   a[i][j]=a[n-1-j][i];
   a[n-1-j][i]=a[n-1-i][n-1-j];
   a[n-1-i][n-1-j]=a[j][n-1-i];
   a[j][n-1-i]=temp;
 }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
return 0;
}
