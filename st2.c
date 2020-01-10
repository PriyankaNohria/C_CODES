#include<stdio.h>
int unique(char *str1);
int main()
{
int t;
char str[100];
scanf("%d",&t);

scanf("%s",str);
if(unique(str)) {
printf("uniqe");
}
else{
printf("not unique");
}
return 0;
}
int unique(char str[100]){
int i=0,a[50]={0},flag=0;
while(str[i]!='\0'){
if(str[i]>=65&&str[i]<=90){
str[i]=str[i]+32;
}
else {
str[i]=str[i];
}
i++;
}
i=0;
while(str[i]!='\0'){
a[str[i]-97]++;
i++;
}
i=0;
while(str[i]!='\0'){
if(a[str[i]-97]!=1) {
flag=1;
break;
}
}
return flag;
}
