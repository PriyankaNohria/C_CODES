#include<stdio.h>
int main()
{
int a[50],b[100]={0},largest;
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
}
largest=a[0];
for(int i=0;i<n;i++)
{
if(largest<a[i])
largest=a[i];
}
printf("the elements of new array is\n");
for(int i=0;i<=largest;i++)
{
printf("%d\n",b[i]);
}
return 0;
}
