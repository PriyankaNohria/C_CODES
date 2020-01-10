#include<stdio.h>
struct fun
{
int x,y;
}point;
int main()
{
int res;
scanf("%d",&point.x);
scanf("%d",&point.y);
res=display(point);
printf("%d\n%d",point.x,point.y);
return 0;
}
int display(int point)
{
point.x=10;
point.y=20;
return point;
}
