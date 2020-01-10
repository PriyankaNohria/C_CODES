#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
int a,b;
cin>>a>>b;
cout<<"before swaping\n";
cout<<a<<"\n"<<b<<"\n";
swap(a,b);
return 0;
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"after swaping\n"<<a<<"\n"<<b;
}

