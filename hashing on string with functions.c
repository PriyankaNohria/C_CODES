#include<stdio.h>
void remove_duplicate(char str[50],int arr[50]);
int main()
{
char str[50];
int aar[50]={0},i=0;
gets(str);
remove_duplicate(str,aar);
return 0;
}
void remove_duplicate(char str[50],int *arr)
{
int i=0;
while(str[i]!='\0'){
arr[str[i]-97]++;
i++;
}
for(int i=0;i<26;i++){
if(arr[i]>0){
printf("%c",i+97);
}
}

}
