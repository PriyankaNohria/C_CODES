#include<stdio.h>
int main()
{
int a[50],n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int num;
printf("the num is : ");
scanf("%d",&num);
for(int i=0;i<n;i++)
{
if(a[i]>num)
{
for(int j=n-1;j>=i;j--){
a[j+1]=a[j];}
a[i]=num;
break;
}
}
for(int i=0;i<n+1;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
