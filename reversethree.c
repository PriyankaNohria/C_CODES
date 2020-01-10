#include<stdio.h>
void swapp(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int main()
{
int a[50],i,j,n,k;
printf("Enter element of an array : ");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Enter the value of K : ");
scanf("%d",&k);
for(i=0;i<n;i=i+k)
{
    if(i+k<=n)
    {
      for(j=0;j<k/2;j++)
      {
         swapp(&a[i+j],&a[i+k-1-j]);
      }
    }
    else
    {
     for(j=1;j<((n-i)/2)+1;j++)
     {
        swapp(&a[j+i-1],&a[k+i-j-1]);
     }
    }
    }
for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}
