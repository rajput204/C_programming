#include<stdio.h>
int main()
{
     int p;
     float a,r,t;
     printf("enter the principal_amount");
     scanf("%d",&p);
     printf("enter the rate and time");
     scanf("%f%f",&r,&t);
     a=(p*r*t)/100;
     printf("amount=%f",a);
     return 0;
}
