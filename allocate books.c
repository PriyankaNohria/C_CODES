#include<stdio.h>
int main()
{
int n,a[50],i,M;
printf("Number Of Elements in Array : ");
scanf("%d",&n);
int sum=0;
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  sum+=a[i];
}
printf("Number Of Students : ");
scanf("%d",&M);
int r=sum;
int l=0,mid;
while(l<r)
{
 mid=(l+r)/2;
 int stu=1,pages=0;
 for(i=0;i<n;i++)
 {
   pages+=a[i];
   if(pages<=mid)
   {
     continue;
   }
   else{
    pages=a[i];
    stu++;
   }
 }
 if(stu>M)
 {
    l=mid+1;
 }
 else if(stu<=M)
 {
    r=mid;
 }
}
printf("%d",l);
return 0;
}
