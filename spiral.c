#include<stdio.h>
int main()
{
 int arr[100][100],j,n,i,count=1;
 printf("Enter no. of Elements in an Array : ");
 scanf("%d",&n);
 int a=0,b=n-1,c=n-1,d=0;
 while(a<=c)
 {
  for(i=d;i<=b;i++)
  {
   arr[a][i]=count++;
  }
  a++;
  for(i=a;i<=c;i++)
  {
   arr[i][b]=count++;
  }
  b--;
  for(i=b;i>=d;i--)
  {
   arr[c][i]=count++;
  }
  c--;
  for(i=c;i>=a;i--)
  {
   arr[i][d]=count++;
  }
  d++;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",arr[i][j]);
  }
  printf("\n");
 }
}
