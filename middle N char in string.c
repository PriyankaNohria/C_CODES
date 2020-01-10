#include<stdio.h>
int main()
{
char str1[50],str2[50];
int n1,n2,j=0;
gets(str1);
scanf("%d%d",&n1,&n2);
for(int i=n1;i<=n2;i++){
str2[j]=str1[i];
 j++;
}
str2[j]='\0';
puts(str2);
return 0;
}
