#include<stdio.h>
int main()
{
int n1,n2,n3,i;
int a[50],b[50],c[50];
printf("Enter total no. of elements of 1st Array : ");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter total no. of elements of 2nd Array : ");
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
    scanf("%d",&b[i]);
}
printf("Enter total no. of elements of 3rd Array : ");
scanf("%d",&n3);
for(i=0;i<n3;i++)
{
    scanf("%d",&c[i]);
}
i=0;
int c2=0,c1=0,c3=0,l=0,m1=0,m2=0,m3=0;
int j=0,k=0,min=0,max=0,res=0,min1=99999;
while(i<n1&&j<n2&&k<n3)
{
 if(a[i]<=b[j]&&a[i]<=c[k])
 {
    min=a[i];
    c1++;
 }
 else if(b[j]<a[i]&&b[j]<=c[k])
    {
    min=b[j];
    c2++;
    }
 else
 {
    min=c[k];
    c3++;
 }
 if(a[i]>=b[j]&&a[i]>=c[k])
    max=a[i];
 else if(b[j]>a[i]&&b[j]>=c[k])
    max=b[j];
 else
    max=c[k];
 res=max-min;
 if(res<min1)
 {
  min1=res;
  m1=a[i];
  m2=b[j];
  m3=c[k];
 }
 i=i+c1;
 j=j+c2;
 k=k+c3;
 c1=0;
 c2=0,c3=0;
}
printf("%d\n",min1);
printf("%d %d %d",m1,m2,m3);
return 0;
}
