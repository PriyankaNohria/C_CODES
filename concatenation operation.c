#include<stdio.h>
int main()
{
char str1[50],str2[50],str3[50];
int k=0,i=0;
scanf("%s",str1);
scanf("%s",str2);
while(str1[i]!='\0')
{
str3[k]=str1[i];
k++;
i++;
}
int j=0;
while(str2[j]!='\0')
{
str3[k]=str2[j];
k++;
j++;
}
str3[j]='\0';
puts(str3);
return 0;
}