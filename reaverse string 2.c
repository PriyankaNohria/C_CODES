#include<stdio.h>
int main()
{
char str1[50];
int i=0;
gets(str1);
int l=strlen(str1);
char temp;
while(i<l){
temp=str1[i];
str1[i]=str1[l];
str1[l]=temp;
i++;
l--;
}
str1[i]='\0';
puts(str1);
return 0;
}
