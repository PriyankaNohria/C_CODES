#include<stdio.h>
int main()
{
 int n,a[50],i;
 printf("Enter the No. of Elements : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 int j=0,k=0;
 for(i=1;i<n;i++)
 {
    if(a[j]!=a[i])
    {
        j++;
      a[j]=a[i];
       k=0;
    }
    if(a[j]==a[i]&&k<1)
    {
        j++;
      a[j]=a[i];
      k++;
    }
 }
 for(i=0;i<j+1;i++)
 {
   printf("%d ",a[i]);
 }
}
