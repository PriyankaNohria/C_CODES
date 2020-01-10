#include<stdio.h>
int main()
{
char str[500];
scanf("\n%[^\n]",str);
int i=0,a[500]={0},flag=0;
while(str[i]!='\0')
{
if(str[i]<97)
{
str[i]=str[i]+32;
}
i++;
}
i=0;
while(str[i]!='\0')
{
a[str[i]-97]++;
i++;
}
for(int i=0;i<26;i++)
{
if(a[i]==0){
flag=1;
break;
}
}
if(flag==1){
printf("It is not pangram");
}
else{
printf("Panagram");
}
return 0;
}
