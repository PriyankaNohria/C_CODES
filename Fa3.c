#include<stdio.h>
void sort(int *,int);
void display(int *,int);
int main()
{
int a[50],n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
display(a,n);
return 0;
}
void sort(int a[50],int n)
{
for(int i=0;i<n-1;i++)
{
int temp,swap=0;
for(int j=0;j<(n-1)-i;j++)
{
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swap=1;
}
if(swap=0){
 break;
}
}
}
}
void display(int a[50],int n){
int b[50]={0},c[50]={0};
for(int i=0;i<n;i++)
{
for(int j=2;j<a[i]/2;j++){

if(a[i]%j==0){

b[i]=a[i];
break;
}
else {
c[i]=a[i];
break;
}
}
}
printf("Prime\n");
for(int i=0;i<n;i++)
{
if(c[i]!=0){
printf("%d\n",c[i]);
} }
printf("Composite\n");
for(int i=0;i<n;i++)
{
if(b[i]!=0){
printf("%d\n",b[i]);
}
}
}
