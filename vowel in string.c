#include<stdio.h>
int main()
{
char str[50];
int i=0,count=0;
scanf("\n%[^\n]",str);
while(str[i]!='\0'){
if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
count++;
}
i++;
}
printf("%d",count);
return 0;
}
