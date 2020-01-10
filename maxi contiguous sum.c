#include<stdio.h>
int main()
{
 int a[100],n,i,j;
 printf("Enter the Number of Elements : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int sum=a[0],max=a[0];
 for(i=1;i<n;i++)
 {
  if(sum+a[i]>a[i])
  {
   sum=sum+a[i];
  }
  else{
   sum=a[i];
  }
  if(sum>max)
  {
     max=sum;
  }
 }
 printf("%d",max);
}
