#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    printf("enter a");
    scanf("%d",&a);
for(int i=1;i<=10;i=i+1)
{
    b=a*i;
printf("%d*%d=%d\n",a,i,b);
}
return 0;
}
