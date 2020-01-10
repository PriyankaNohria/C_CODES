#include<stdio.h>
//#include<string.h>
int main()
{
char str[500],p[500];
scanf("\n%[^\n]",str);
scanf("\n%[^\n]",p);
int i=0,j=0,k,pos;
while(str[i]!='\0'){
j=0,k=i;
while(str[k]==p[j]&&p[j]!='\0'){
j++;
k++;
}
if(p[j]=='\0'){
pos=k-strlen(p);
}
i++;
}
printf("%d",pos);
return 0;
}
