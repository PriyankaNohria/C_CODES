#include<stdio.h>
#include<string.h>
void swapp(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
int n,a[50],k,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
scanf("%d",&k);
int j;
for(i=0;i<n;i=i+k)
{
 if(i+k<=n)
 {
  for(j=0;j<k/2;j++)
  {
    swapp(&a[i+j],&a[i+k-1-j]);
  }
 }
 else
 {
  for(j=1;j<((n-i)/2)+1;j++)
  {
   swapp(&a[i+j-1],&a[i+k-1-j]);
  }
 }
}
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
return 0;
}
