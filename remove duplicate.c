#include<stdio.h>
int main()
{
 int n,a[50],i;
 printf("Enter Total No. of Elements : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 int j=0;
 for(i=1;i<n;i++)
 {
  if(a[j]!=a[i])
  {
    j++;
   a[j]=a[i];
  }
 }
 printf("Size Of Array : %d\n",j+1);
 for(i=0;i<j+1;i++)
 {
  printf("%d ",a[i]);
 }
}
