#include<stdio.h>
int main()
{
int n;
printf("Square Root Of : ");
scanf("%d",&n);
int l=1,r=n,sqrt=0,mid;
while(l<r)
{
 mid=(l+r)/2;
 if((mid*mid)<=n)
 {
     sqrt=mid;
     break;
 }
 else
 {
  r=mid;
 }
}
printf("%d",sqrt);
}
