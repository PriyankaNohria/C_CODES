#include<stdio.h>
int main()
{
int n,a[100],i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int target;
printf("Enter Target : ");
scanf("%d",&target);
int temp;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-1-i;j++)
 {
     if(a[j]>a[j+1])
     {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
     }
 }
}
int num,dif1,dif=0,sum=0,k;
for(i=0;i<n-2;i++)
{
 j=i+1;
 k=n-1;
 while(j<k)
 {
    sum=a[i]+a[j]+a[k];
      if(sum<target)
        j++;
      if(sum>target)
         k--;
         dif1=target-sum;
      if(dif<dif1)
    {
        dif=dif1;
      num=sum;
    }

 }
}
printf("%d",num);
return 0;
}
