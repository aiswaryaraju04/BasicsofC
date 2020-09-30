#include<stdio.h>
void main()
{ 
    int a,b,val;
    printf("Enter the 2 numbers:");
    scanf("%d%d",&a,&b);
    val=a;
    a=b;
    b=val;
    printf("a=%d",a,"b=%d",b);
    
}