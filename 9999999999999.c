#include<stdio.h>
int main()
{
int x=10;
int y=20,res;
res=y++ + x++;
res=++y+ ++x;
printf("\nx=%d\ny=%d\nRESULT=%d",x,y,res);
return 0;
}
