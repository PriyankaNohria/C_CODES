#include<stdio.h>
int fact(int n);
int main()
{
int n,i,num,deno;
float result=0.0;
scanf("%d",&n);
for(i=1;i<=n;i++) {
num=pow(i,i);
deno=fact(i);
result=result+(float)num/deno;
}
printf("%.2f",result);
return 0;
}
int fact(int n) {
int f=1;
for(int i=n;i>=1;i--)
f=f*i;
return f;
}
