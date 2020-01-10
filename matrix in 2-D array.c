#include<stdio.h>
int main()
{
int mat[3][3];
int i,j,r,c;
scanf("%d%d",&r,&c);
for(i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&mat[i][j]);
}
}
for(i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
return 0;
}
