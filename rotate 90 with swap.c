#include<stdio.h>
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
int a[100][100],b[100][100],n;
int i,j,temp;
printf("No. of Rows And Columns in the Arrary : ");
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
    printf("%d  ",a[i][j]);
  }
  printf("\n");
}
printf("********************\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    b[i][j]=a[j][i];
 }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d  ",b[i][j]);
  }
  printf("\n");
}
printf("********************\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n/2;j++)
 {
    swap(&b[i][j],&b[i][n-1-j]);
 }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d  ",b[i][j]);
  }
  printf("\n");
}
}
