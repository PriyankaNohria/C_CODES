#include<stdio.h>
//point display(point p1);
typedef struct
{
int x;
int y;
}point;
point display(point p1);
int main()
{
point res;
point p1;
scanf("%d",&p1.x);
scanf("%d",&p1.y);
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
