#include<stdio.h>
typedef enum DAY{SUN,MON,TUE,WED,THR,SAT}CLR;
int main(){
CLR res=MON+SUN;
printf("%d\n",res);
for(int i=SUN;i<=SAT;i++){
printf("%d\n",i);
}
return 0;
}
