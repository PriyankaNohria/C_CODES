#include<stdio.h>
int main()
{
char str[50];
int i=0;
scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]>=65&&str[i]<=90)
{
str[i]=str[i]+32;
}
else {
str[i]=str[i]-32;
}
}
printf("%s",str);
return 0;
}
