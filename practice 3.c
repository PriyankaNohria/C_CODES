#include<stdio.h>
int main()
{
int n,a[50],b[50],count=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int large;
large=a[0];
for(int i=0;i<n;i++)
{
if(large<a[i])
 large=a[i];
}
for(int i=0;i<n;i++)
{
if(large==a[i])
count++;
}
for(int i=0;i<count;i++)
{
b[i]=large;
}
for(int i=0;i<n;i++)
{
if(a[i]!=large) {
a[i]=a[i]; }
}
int j=0;
for(int i=count;i<n;i++)
{
b[i]=a[j];
j++;
}
for(int i=0;i<n;i++)
{
printf("%d\n",b[i]);
}
return 0;
}
