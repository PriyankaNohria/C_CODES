#include<stdio.h>
struct publication
{
char pub_name[50];
char book[5][50];
}pub[50];
int main()
{
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("Nmae of publication %d : ",i+1);
scanf("\n%[^\n]",pub[i].pub_name);
for(int j=0;j<5;j++)
{
printf("Book name : ");
scanf("\n%[^\n]",pub[i].book[j]);
}
}
return 0;
}
