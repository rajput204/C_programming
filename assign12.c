#include<stdio.h>
int main()
{
    int l,b,h;
    float v;
    printf("enter the length ,breadth and height");
    scanf("%d%d%d",&l,&b,&h);
    v=l*b*h;
    printf("volume=%f",v);
    return 0;
}