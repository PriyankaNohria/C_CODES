#include<stdio.h>
int* sum(int*,int*);
int main()
{
int a=2,b=3;
int *res=sum(&a,&b);
print();
printf("%d",*res);
return 0;
}
int* sum(int*a,int*b){
int *c=(int*)malloc(sizeof(int));
 *c=*a+*b;
return c;
}
void print() {
printf("hello");
}
