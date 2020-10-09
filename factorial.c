#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("\nfactorial is: %d", fact);

}    
    