#include<stdio.h>
int main()
{
 int n,a[50],i;
 printf("ENter no. of Elements in Array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 int k;
 printf("Enter the Value of k : ");
 scanf("%d",&k);
 int j=0;
 a[j]=a[0];
 for(i=1;i<n;i++)
 {
    if(a[j]!=a[i])
    {
        j++;
        a[j]=a[i];
    }
 }
 for(i=0;i<j+1;i++)
    printf("%d ",a[i]);
 printf("\n");
 int c=0;
 n=j+1;
 for(i=0;i<n-1;i++)
 {
  j=i;
  while(j<n)
  {
    if(a[i]+k==a[j])
    {
       c++;
    }
    j++;
  }
  if(i>0)
  {
    j=i;
    while(j>=0)
    {
        if(a[i]+k==a[j])
        {
        c++;
        }
        j--;
    }
  }
 }
 printf("%d",c);
}
