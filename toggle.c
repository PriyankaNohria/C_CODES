#include<stdio.h>//toggle
int main()
{
int num;
int size=sizeof(int);
scanf("%d",&num);
for(int i=0;i<size;i++) {
num=num^(1<<i);
}
printf("%d",num);
return 0;
}
