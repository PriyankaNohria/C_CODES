#include <stdio.h>
#include<stdlib.h>
int* maxi(int* A,int n)
{
    int *B=(int*)malloc(sizeof(int)*n);
    int max=-99,sum=0,i;
    for(i=0;i<n;i++)
    {
        if(sum+A[i]>A[i])
        sum=A[i]+sum;
        else
        sum=A[i];
        if(max<sum)
        max=sum;

        B[i]=max;
    }
    return B;
}
int* maxi2(int* A,int n)
{
    int *B=(int*)malloc(sizeof(int)*n);
    int *C=(int*)malloc(sizeof(int)*n);
    int max=-99,sum=0,i,j=0;
    for(i=n-1;i>=0;i--)
    {
        if(sum+A[i]>A[i])
        sum=A[i]+sum;
        else
        sum=A[i];
        if(max<sum)
        max=sum;

        B[j++]=max;
    }
    i=n-1,j=0;
    while(i>=0)
    {
        C[j++]=B[i--];
    }
    return C;
}
int* mini(int* A,int n)
{
    int *B=(int*)malloc(sizeof(int)*n);
    int mini=0,min=99,i;
    for(i=0;i<n;i++)
    {
        if(A[i]+mini<A[i])
        mini=A[i]+mini;
        else
        {
        mini=A[i];
        }
        if(min>mini)
        min=mini;

        B[i]=min;

    }
    return B;
}
int* mini2(int* A,int n)
{
    int *B=(int*)malloc(sizeof(int)*n);
    int *C=(int*)malloc(sizeof(int)*n);
    int mini=0,j=0,min=99,i;
    for(i=n-1;i>=0;i--)
    {
        if(A[i]+mini<A[i])
        mini=A[i]+mini;
        else
        {
        mini=A[i];
        }
        if(min>mini)
        min=mini;

        B[j++]=min;

    }
    i=n-1,j=0;
    while(i>=0)
    {
        C[j++]=B[i--];
    }
    return C;
}
void delish(int* A,int n)
{
    int *B1=(int*)malloc(sizeof(int)*n);
    int *C1=(int*)malloc(sizeof(int)*n);
    int *B2=(int*)malloc(sizeof(int)*n);
    int *C2=(int*)malloc(sizeof(int)*n);
    int i;
    B1=maxi(A,n);
    C1=mini(A,n);
    B2=maxi2(A,n);
    C2=mini2(A,n);
    for(i=0;i<n;i++)
    {
     B1[i]=B1[i]-C2[i];
    }
    for(i=0;i<n;i++)
    {
    B2[i]=B2[i]-C1[i];
    }
    int max=0,max1=0;
    for(i=0;i<n;i++)
    {
      if(max<B1[i])
      max=B1[i];
    }
    for(i=0;i<n;i++)
    {
      if(max1<B2[i])
      max1=B2[i];
    }
    if(max1>max)
    printf("%d\n",max1);
    else
    printf("%d\n",max);
}
int main(void) {
    int t,n;
    scanf("%d",&t);
    int i,k;
    for(k=0;k<t;k++)
    {
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    delish(a,n);
    }
	return 0;
}

