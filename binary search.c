#include<stdio.h>
int binary_search(int a[50],int l,int r,int num)
{
    int mid;
 while(l<=r)
 {
   mid=(l+r)/2;
   if(a[mid]==num)
   {
      return mid;
   }
   else if(a[mid]>num)
   {
     r=mid-1;
   }
   else
   {
     l=mid+1;
   }
 }
 return -1;
}
int main()
{
 int n,a[50],i;
 printf("Enter the Elements of Array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int x;
 printf("Enter number which you want to search in array : ");
 scanf("%d",&x);
 int res=binary_search(a,0,n-1,x);
 printf("%d",res);
 return 0;
}
