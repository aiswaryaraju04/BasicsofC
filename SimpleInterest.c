#include<stdio.h>
int main()
{ 
    float p,n,r,si;
    printf("Enter the principal amount,no of years,interest rate\n");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("The simple interest is %f",si);
    return 0;

}