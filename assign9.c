#include<stdio.h>
int main()
{
    float avg;
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("avg=%f",avg);
    return 0;
}