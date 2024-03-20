#include<stdio.h>
int main()
{   int x,y;
    char c;
    float f;
    x=sizeof(c);
    y=sizeof(f);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}