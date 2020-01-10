#include<stdio.h>
int main()
{
int n1,n2,a[50],b[50],i;
printf("Enter the total Elements of 1st Array : ");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the total Elements of 2nd Array : ");
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
    scanf("%d",&b[i]);
}
int n,j=0,k=0;
if(n1>n2)
    n=n1;
else
    n=n2;
int res[50];
i=0;
while(i<n)
{
 if(a[i]<b[j])
 {
    i++;
 }
 else if(a[i]>b[j])
 {
   j++;
 }
 else
 {
   res[k]=a[i];
   j++;
   k++;
   i++;
 }
}
  for(i=0;i<k;i++)
  {
      printf("%d ",res[i]);
  }
return 0;
}
