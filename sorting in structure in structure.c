#include<stdio.h>
#include<string.h>
struct publication
{
char pub_name[50];
char book[5][50];
}pub[50];
int main()
{
int n;
char temp[20];
for(int i=0;i<2;i++)
{
printf("Nmae of publication %d : ",i+1);
scanf("\n%[^\n]",pub[i].pub_name);
for(int j=0;j<5;j++)
{
printf("Book name : ");
scanf("\n%[^\n]",pub[i].book[j]);
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<5-1;j++)
{
for(int k=0;k<(5-j)-1;k++)
{
if(strcmp(pub[i].book[k],pub[i].book[k+1])>0)
{
strcpy(temp,pub[i].book[k]);
strcpy(pub[i].book[k],pub[i].book[k+1]);
strcpy(pub[i].book[k+1],temp);
}
}
}
}
for(int i=0;i<2;i++)
{
printf("%s\n",pub[i].pub_name);
for(int j=0;j<5;j++)
{
printf("%s\n",pub[i].book[j]);
}
}
return 0;
}
