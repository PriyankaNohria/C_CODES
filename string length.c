#include<stdio.h>
int main()
{
char str[50];
int i=0;
scanf("%s",str);
while(str[i]!='\0')
{
i++;
}
printf("%d",i);
return 0;
}
