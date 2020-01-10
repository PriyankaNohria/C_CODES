#include<stdio.h>
int main()
{
char str[50];
int i=0,count=0,count1=0;
gets(str);
while(str[i]!='\0')
{
if(str[i]=='{') {
 count++;    }
else if(str[i]=='}'){
 count1++;
}
i++;
}
if(count==count1){
printf("valid");
}
else{
printf("Not valid");
}
return 0;
}
