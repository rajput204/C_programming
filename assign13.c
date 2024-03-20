#include<stdio.h>
int main()
{   int n,sp,cp;
    float profit,loss;
    printf("enter the number of bananas sold");
    scanf("%d",&n);
    printf("enter the selling price");
    scanf("%d",&sp);
    printf("enter the cost pricce");
    scanf("%d",&cp);
    profit=(sp*n)-cp;
    printf("profit=%f",profit);
    loss=cp-(sp*n);
    printf("loss=%f",loss);
    return 0;
}