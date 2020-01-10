#include<stdio.h>
typedef struct
{
int x;
int y;
}point;
point display(point p1);
int main()
{
point p1;
point res;
p1.x=4;
p1.y=5;
res=display(p1);
printf("%d\n%d",res);
return 0;
}
point display(point p1)
{
p1.x=100;
p1.y=1000;
return p1;
}
