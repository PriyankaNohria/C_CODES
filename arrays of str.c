#include<stdio.h>
int main()
{
char str[50][50];
int arr[50];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
fflush(stdin);
gets(str[i]);
}
printf("before sorting : \n");
for(int i=0;i<size;i++)
{
puts(str[i]);
}
int i=0,count=0;
printf("No. of vowels : \n");
while(i<size) {
int j=0;
count=0;
while(str[i][j]!='\0'){
if(str[i][j]=='a'||str[i][j]=='A'||str[i][j]=='e'||str[i][j]=='E'||str[i][j]=='i'||str[i][j]=='I'||str[i][j]=='o'||str[i][j]=='O'||str[i][j]=='U'||str[i][j]=='u'){
count++;
}
j++;}
printf("%d\n",count);
i++;
}
return 0;
}
