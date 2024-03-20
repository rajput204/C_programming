#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter the value of x and y ");
    scanf("%d%d",&x,&y);
    printf("the value of x=%d and the value of y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\nafter swipping  the value of x=%d and y=%d",x,y);
    return 0;
}