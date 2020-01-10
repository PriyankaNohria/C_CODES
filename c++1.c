#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
int main()
{
int a,b;
cin>>a>>b;
add(a,b);
sub(a,b);
return 0;
}
void add(int a,int b)
{
out<<a+b;
}
void sub(int a,int b)
{
out<<a-b;
}
