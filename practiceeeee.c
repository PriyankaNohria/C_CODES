#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
gets(str1);
gets(str2);
strcmp(str1,str2);
if(strcmp(str1,str2)==0){
printf("same");
}
else if(strcmp(str1,str2)>0){
printf("str1 is bigger");
}
else{
printf("str2 is bigger");
}
return 0;
}
