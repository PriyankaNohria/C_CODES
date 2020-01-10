    #include<stdio.h>
    void main()
    {
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int total=0;
    total=a+b+c+d+e;
    float Average=0.0;
    float Percentage=0.0;
    scanf("%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e);
    Average=total/5.0;
    Percentage=(total/500.0)*100.0;
    printf("Average marks=%.2f\n",Average);
    printf("Percentage=%.2f",Percentage);
    return 0;
}
