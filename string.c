#include<stdio.h>
int main()
{
char str[50],i=0;
char ch=getchar();
while(ch!='*')
{
str[i]=ch;
i++;
ch=getchar();
}
str[i]='\0';
printf("%s\n",str[2]);
printf("%d",i);
return 0;
}
