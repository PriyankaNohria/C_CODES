#include<stdio.h>
int main()
{
char str[50];
int n,a[50]={0};
gets(str);
scanf("%d",&n);
int *a=(int*)calloc(n,sizeof(int));
int i=0;
while(str[i]!='\0')
{
a[str[i]-97]++;
i++;
}
for(int i=0;i<n;i++)
{
if(a[i]>0){
printf("%c",i+97);
}
}
return 0;
}
