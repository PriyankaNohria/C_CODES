#include<stdio.h>
int main()
{
int num,sum=0;
scanf("%d",&num);
int first=0,second=1;
for(int i=0;i<num-2;i++) {
sum=second+first;
first=second;
second=sum;
}printf("%d",sum);
return 0;
 }
