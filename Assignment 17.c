#include <stdio.h>
int main()
{
    int n, i, j;
    float x, sum=0, term, power, fact;
    int sign=1;
    printf("Enter value of x in radians: ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        power=1;
        fact=1;
        for(j=1; j<=(2*i-1); j++)
        {
            power=power*x;
        }
        for(j=1; j<=(2*i-1); j++)
        {
            fact=fact*j;
        }
        term=sign*(power/fact);
        sum=sum+term;
        sign=-sign;
    }
    printf("Sum of sine series=%f", sum);
    return 0;
}