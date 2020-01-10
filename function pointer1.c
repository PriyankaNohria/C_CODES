#include<stdio.h>
void display()
{
printf("hello");
}
void B(void (*fun)())
{
    fun();
}
int main()
{
void (*fun)();
 fun=display;
fun();
B(fun);
return 0;
}

