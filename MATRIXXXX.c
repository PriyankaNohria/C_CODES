#include<stdio.h>
int main()
{
char str[50],ch;
ch=gets(str);
int i=0;
while(str[i]!='*'){
str[i]=ch;
ch=gets(str[i]);
 i++;
}
str[i]='\0';
return 0;
}
