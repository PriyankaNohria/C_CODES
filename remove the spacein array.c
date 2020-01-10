#include<stdio.h>
int main()
{
char name[50];
char ch=getchar();
int i=0;
while(ch!='*')
{
name[i]=ch;
i++;
ch=getchar();
}
printf("%d\n",i);
for(int j=0;j<i/2;j++)
{
if(name[j]==" ") {
j=j+1; }
else {
printf("%s",name);
} }
return 0;
}
