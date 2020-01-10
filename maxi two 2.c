#include<stdio.h>
int main()
{
 int n,a[50],i;
 printf("Enter total number of Elements : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
        scanf("%d",&a[i]);
 }
 int j=0;
 for(i=0;i<n-2;i++)
 {
   if(a[i]==a[i+1]&&a[i+1]==a[i+2])
   {}
   else
   {
    a[j]=a[i];
    j++;
   }
 }
 a[j]=a[n-1];
 j++;
 a[j]=a[n-2];
 for(i=0;i<j+1;i++)
    printf("%d ",a[i]);
 return 0;
}
