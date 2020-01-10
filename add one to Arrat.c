#include<stdio.h>
int main()
{
 int n,a[50],i;
 printf("Enter the Elements of Array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int len=0,carry=1,sum;
 int *arr=(int*)malloc(sizeof(int)*(n+1));
 int n1=n;
 for(i=n-1;i>=0;i--)
 {
  arr[n1--]=(a[i]+carry)%10;
  carry=(a[i]+carry)/10;
 }
 arr[n1]=carry;
 for(i=0;i<n+1&&arr[i]==0;i++){
    len++;}
 arr=arr+len;
 for(i=0;i<(n+1)-len;i++)
 {
    printf("%d ",arr[i]);
 }
 return 0;
}
