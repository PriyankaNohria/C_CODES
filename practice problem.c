#include<stdio.h>
int main()
{
char str[50],temp;
gets(str);
int len=strlen(str);
for(int i=0;i<len-1;i++)
{
for(int j=0;j<(len-i)-1;j++)
{
if(str[j]>str[j+1]) {
temp=str[j];
str[j]=str[j+1];
str[j+1]=temp;  }
}
}
puts(str);
return 0;
}
