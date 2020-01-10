#include<stdio.h>
struct demo
{
int x;
int y;
}d1;
void display(struct demo *ptr);
int main()
{
struct demo*ptr;
ptr=&d1;
scanf("%d",&ptr->x);
scanf("%d",&ptr->y);
display(ptr);
printf("%d\n%d",d1.x,d1.y);
return 0;
}
void display(struct demo *dptr)
{
printf("%d\n",dptr->x);
printf("%d\n",dptr->y);
dptr->x=0;
dptr->y=0;
}
