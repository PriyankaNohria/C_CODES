#include<stdio.h>
int main()
{
int a[100],n;
int i,j;
printf("Enter the total no. of Elements in Array : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
printf("\n");
int rotate;
printf("How many Times You Want to Rotate The Array : ");
scanf("%d",&rotate);
int mod=rotate%n;
int temp;
for(j=0;j<mod;j++)
{
temp=a[n-1];
for(i=n-1;i>0;i--)
{
  a[i]=a[i-1];
}
a[0]=temp;
}
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
return 0;
}
