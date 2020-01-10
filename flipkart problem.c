#include<stdio.h>
int small(int arr[],int size);
void sub(int size,int s,int arr[]);
int chk(int size,int arr[]);
int main()
{
int size,arr[50],s,k=1,step=0;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
while(k!=0)
{
s=small(arr,size);
sub(size,s,arr);
k=chk(size,arr);
step++;
}
printf("%d",step);
return 0;
}
int small(int *arr,int s)
{
int smallest=arr[0];
for(int i=0;i<s;i++)
{
if(arr[i]==0)  {
i=i+1; }
else if(arr[i]>=0) {
if(smallest>arr[i]) {
smallest=arr[i];
}
}
return smallest;
} }
void sub(int size,int s,int *arr)
{
int count=0;
for(int i=0;i<size;i++)
{
if(arr[i]!=0)
arr[i]=arr[i]-s;
count++;
}
printf("count=%d",count);
}
int chk(int size,int *a)
{
int count=0;
for(int i=0;i<size;i++)
{
if(a[i]==0) {
count++;
}
if(count==size)  {
return 0;  }
} }
