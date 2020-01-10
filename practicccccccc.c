#include<stdio.h>
int main()
{
int  a[50],b[50]={0};
int n,i,pos;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
float median;
if(n%2==0){
median=(a[n/2]+a[n/2+1])/2;
}
else {
median=a[n/2+1];
}
printf("%.2f",median);
return 0;
}
