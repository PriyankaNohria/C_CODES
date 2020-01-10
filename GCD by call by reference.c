#include<stdio.h>
//void swap(int*,int*);
void GCD(int*,int*);
int main()
{
int n1,n2;
scanf("%d%d",&n1,&n2);
if(n1<n2) {
swap(&n1,&n2);
}
GCD(&n1,&n2);
printf("%d",n2);
return 0;
}
void swap(int*n1,int*n2)
{
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
}
void GCD(int*n1,int*n2)
{
int rem;
while(n2!=0) {
rem=*n1%*n2;
*n1=*n2;
*n2=rem;
}
}
