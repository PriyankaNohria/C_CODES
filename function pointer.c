#include<stdio.h>
int sum(int a,int b){
return a+b;
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int(*fun_ptr)(int,int);
fun_ptr=&sum;
int res=fun_ptr(a,b);
printf("%d",res);
return 0;
}
