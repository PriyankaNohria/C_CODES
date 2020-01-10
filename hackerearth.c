#include<stdio.h>
int try(int,int);
int main()
{
int num,digit,count;
scanf("%d%d",&num,&digit);
count=try(num,digit);
printf("%d",count);
return 0;
}
int try(int num,int digit)
{
int rem,count=0;
while(num>0) {
rem=num%10;
if(rem==digit) {
count++;
}
num=num/10;
}
return count;
}
