#include<stdio.h>
int main()
{
char str1[50],str2[50];
int a1[50]={0},a2[50]={0},flag=0,i=0;
scanf("\n%[^\n]",str1);
scanf("\n%[^\n]",str2);
while(str1[i]!='\0'){
a1[str1[i]-97]++;
i++;
}
i=0;
while(str2[i]!='\0'){
a2[str2[i]-97]++;
i++;
}
for(int i=0;i<26;i++){
if(a1[i]!=a2[i]){
flag=1;
break;
}
i++;
}
if(flag==1){
printf("Not Anagram");
}
else{
printf("Anagram");
}
return 0;
}
