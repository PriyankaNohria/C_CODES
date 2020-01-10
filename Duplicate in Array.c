#include<stdio.h>
int main()
{
 int n,a[50],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int slow,fast;
 if(n<=1)
 {
    printf("-1");
 }
 else
 {
  slow=a[0];
  fast=a[a[0]];
  while(slow!=fast)
  {
   slow=a[slow];
   fast=a[a[fast]];
  }
  slow=0;
  while(slow!=fast)
  {
   slow=a[slow];
   fast=a[fast];
  }
  printf("%d",slow);
 }
}
