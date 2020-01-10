#include<stdio.h>
#include<math.h>
struct demo
{
int x,y;
}d[10];
int main()
{
int n;
scanf("%d",&n);
text(d,n);
display(d,n);
}
void text(struct demo *ptr,int n)
{
for(int i=0;i<n;i++)
{
scanf("%d",&ptr->x);
scanf("%d",&ptr->y);
ptr++;
}
return ptr;
}
void display(struct demo *ptr,int n)
{
for(int i=0;i<n;i++)
{
printf("%d%d\n",ptr->x,ptr->y);
ptr++;
}
}
