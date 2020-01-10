#include<stdio.h>
int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = camelcase(s);
    printf("%d\n", result);
    return 0;
}
int camelcase(char str[50])
{
int i,j=0,count=0;
while(str[j]!='\0'){
while(str[j]>=97&&str[j]<=122){
j++;
}
count++;
j++;}
return count;
}
