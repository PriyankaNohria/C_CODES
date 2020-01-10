#include<stdio.h>
int main()
{
int n,a[50],swap=0,temp;
scanf("%d",&n);
printf("the elements of array");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++)
{
swap=0;
for(int j=0;j<(n-i)-1;j++)
{
if(a[j]>a[j+1]) {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swap=1; }
}
if(swap==0)
break;
}
printf("The new array after bubble sort is:\n");
for(int i=0;i<n;i++)
{
 printf("%d\n",a[i]);
}
return 0;
}
