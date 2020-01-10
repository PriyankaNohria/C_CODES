#include<stdio.h>
int main()
{
int n,a[50];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int num,temp;
printf("enter the position : ");
scanf("%d",&num);
for(int i=0;i<n-1;i++)
{
if(i==num) {
a[i]=a[i]; }
else {
for(int j=0;j<(n-i)-1;j++)
{
if(a[j]>a[j+1]) {
temp=a[j];
a[j]=a[j+1];
a[j+1]=a[j];  } }
}
}
for(int i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
