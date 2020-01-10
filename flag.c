#include<stdio.h>
int main()
{
int i,num;
int flag=0;
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
else{
flag=0;
}
}
if(flag==1){
printf("not prime"); }
else{
printf("prime"); }
return 0;
}

