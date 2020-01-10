#include<stdio.h>
int main()
{
  int i = 0;
  while(i < 3)
  {
    printf("loop"); /* printed infinite times */
    //continue;
    i++; /*This statement is never executed*/
  }
  getchar();
  return 0;
}
