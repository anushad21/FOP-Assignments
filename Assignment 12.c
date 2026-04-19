#include <stdio.h>
int main() 
{
    int a, b, i;
    int gcd=1;
    int scd=-1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int min=(a<b)?a:b;
    for(i=1; i<=min; i++) 
    {
        if(a%i==0 && b%i==0) 
        {
            gcd=i;
        }
    }
    for(i=2; i<=min; i++) 
    {
        if(a%i==0 && b%i==0) 
        {
            scd=i;
            break;
        }
    }
    printf("GCD=%d\n", gcd);
    if(scd==-1)
    {
        printf("No common divisor other than 1.\n");
    }
    else
    {
        printf("Smallest Common Divisor (other than 1)=%d\n", scd);
    }
    return 0;
}