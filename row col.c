#include<stdio.h>
int main()
{
int n,j,k,a[100][100],i;
printf("Enter the Total No. of Elements : ");
scanf("%d",&n);
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
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[i][j]==0)
    {
        a[i][j]=-1;
    }
  }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[i][j]==-1)
    {
        for(k=0;k<n;k++)
        {
        a[i][k]=0;
        }
        for(k=0;k<n;k++)
        {
        a[k][n-1-i]=0;
        }
    }
  }
}
printf("*********************\n");
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
