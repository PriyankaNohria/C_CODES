#include<stdio.h>
int main()
{
 int num,i;
 scanf("%d",&num);
 int count=__builtin_clz(num);
 /*
 int x=num^0xAAAAAAAA&~(-1<<(32-count)); we can also use this Method
 int y=num^0x55555555&~(-1<<(32-count));
 if(x||y)
    printf("Alternative Pattern");
 else
    printf("Not Alternative Pattern");*/
 if(num^(num>>1)==-1)
 {
     printf("Alternative Pattern");
 }
 else{
    printf("Not Alternative Pattern");
 }
 return 0;
}
