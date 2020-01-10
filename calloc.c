#include<stdio.h>
int main()
{
int a[50],n;
scanf("%d",&n);
int *a1=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",&a);
}
for(int i=0;i<n;i++)
{
a1[a[i]]++;
}
for(int i=0;i<n;i++) {
printf("%d\n",a1[i]); }
return 0;
}
