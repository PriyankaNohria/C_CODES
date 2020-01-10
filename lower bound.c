#include<stdio.h>
int lower_bound(int a[50],int l,int r,int num)
{
 int mid;
 while(l<r)
 {
  mid=(l+r)/2;
  if(a[mid]>=num)
  {
    r=mid;
  }
  else{
   l=mid+1;
  }
 }
 return r;
}
int main()
{
 int n,a[50],i;
 printf("Enter the no. of Elements in Array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int x;
 printf("Lower Bound of : ");
 scanf("%d",&x);
 int res=lower_bound(a,0,n-1,x);
 printf("%d",res);
 return 0;
}
