#include<stdio.h>
#include<string.h>
int value(char ch)
{
 if(ch=='i'||ch=='I')
        return 1;
 if(ch=='v'||ch=='V')
        return 5;
 if(ch=='x'||ch=='X')
        return 10;
 if(ch=='l'||ch=='L')
        return 50;
 if(ch=='c'||ch=='C')
        return 100;
 if(ch=='d'||ch=='D')
        return 500;
 if(ch=='m'||ch=='M')
        return 1000;
   return -1;
}
int main()
{
char str[100];
scanf("\n%[^\n]",str);
int n=strlen(str);
int i,sum=0,a,b;
for(i=1;i<n;i++)
{
 a=value(str[i-1]);
 b=value(str[i]);
 if(a>=b)
    sum=sum+a;
 else
    sum=sum-a;
}
b=value(str[n-1]);
sum=sum+b;
printf("%d",sum);
return 0;
}
