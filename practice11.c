#include<stdio.h>
int main()
{
int i,sum=0,n,a[50],k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  sum+=a[i];
}
scanf("%d",&k);
int l=0,r=sum,mid;
while(l<r)
{
mid=(l+r)/2;
int stu=1,pages=0;
for(i=0;i<n;i++)
{
 pages+=a[i];
 if(pages<=mid)
 {}
 else
 {
   pages=a[i];
   stu++;
 }
 }
 if(stu>k)
  l=mid+1;
 else
  r=mid;
}
printf("%d",l);
return 0;
}
