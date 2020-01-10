#include<stdio.h>
void print(int r,int c,int *a[])
{
    int i,j;
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
    printf("%d\t",*((a+i)+j));
    }
    printf("%d\n");
   }
}
int main()
{
int a[2][3]={{1,2,3},{4,5,6}};
print(2,3,*a);
return 0;
}
