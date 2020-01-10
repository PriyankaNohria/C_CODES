#include<stdio.h>
struct demo
{
int x;
int y;
}d1;
int main()
{
int n;
struct demo *ptr[10];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
ptr[i]=(struct demo*)malloc(sizeof(struct demo));
scanf("%d",&ptr[i]->x);
scanf("%d",&ptr[i]->y);
}
return 0;
}
