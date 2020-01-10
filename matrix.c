#include<stdio.h>
int main()
{
int arr[50][50],rows,col;
scanf("%d%d",&rows,&col);
for(int i=0;i<rows;i++)
{
for(int j=0;j<col;j++)
{
printf("%d",j);
}
printf("\n");
 }
return 0;
}
