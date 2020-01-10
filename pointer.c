void find_prime(int*a) {
int i,flag;
for(i=2;i<=*a/2;i=i+1) {
if(*a%i==0) {
flag=1;
break;
}
else {
flag=0;
break;
} }
if(flag==1) {
printf("%d is not prime",*a);
}
else {
printf("%d is prime",*a);
}
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    scanf("%d",&a);
    find_prime(&a);
    return 0;
}
