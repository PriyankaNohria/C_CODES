#include<stdio.h>
int main()
{
 int n,a[50],i,N,left,right;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("No. of maximum Zeros which can be flip : ");
 scanf("%d",&N);
int r=0,l=0,count=0,max=0,count_Zero=0;
while(r<n)
{
 if(a[r]==1)
 {
   r++;
   count++;
 }
 else if(a[r]==0&&count_Zero<N)
 {
     r++;
     count++;
     count_Zero++;
 }
 else
 {
    if(max<count)
    {
      max=count;
      right=r;
      left=l;
    }

    while(a[l]!=0)
    {
        l++;
        count--;
    }
    l++;
    count_Zero--;
    count--;
 }
}
if(a[n-1]==1)
 {
max=count;
right=r;
left=l;
while(right>left){
    printf("%d ",left);
    left++;
}
printf("\n%d",max);
 }
 else
 {
     while(right>left){
    printf("%d ",left);
    left++;
}
   printf("\n%d",max);
 }
return 0;
}