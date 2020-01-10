#include<stdio.h>
int main()
{
char str[50],p[50];
scanf("\n%[^\n]",str);
scanf("\n%[^\n]",p);
int i=0,j=0,count=0;
while(str[i]!='\0'){
j=0;
while(str[i]==p[j]&&p[j]!='\0'){
j++;
i++;
}
if(p[j]=='\0'){
count++;
}
i++;
}
printf("%d",count);
return 0;
}
