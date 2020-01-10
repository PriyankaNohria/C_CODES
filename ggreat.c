#include<stdio.h>
int main()
{
char str[50],p[50];
int i=0,j=0,k,count=0;
scanf("\n%[^\n]",str);
scanf("\n%[^\n]",p);
while(str[i]!='\0'){
j=0,k=i;
while(str[k]==p[j]&&p[j]!='\0'){
 j++;
 k++;
}
if(p[j]=='\0'){
count++;
}
i++;
}
printf("%d",count);
return 0;
}
