#include<stdio.h>
int main()
{
char str1[50],str2[50];
int i=0;
gets(str1);
int l=strlen(str1);
while(str1[i]!='\0') {
str2[i]=str1[l-1];
i++;
l--;
}
str2[i]='\0';
puts(str2);
return 0;
}
