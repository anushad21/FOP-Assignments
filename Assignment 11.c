#include <stdio.h>
#include <math.h>
int main() 
{
    int n, choice, i, prime;
    long int fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    do 
    {
        printf("Here is the menu: \n");
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Check Prime\n");
        printf("5. Factorial\n");
        printf("6. Prime Factors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("Square root=%.2f\n\n", sqrt(n));
                break;
            case 2:
                printf("Square=%d\n\n", n*n);
                break;
            case 3:
                printf("Cube=%d\n\n", n*n*n);
                break;
            case 4:
                prime=1;
                if(n<=1)
                {
                    prime=0;
                }
                else 
                {
                    for(i=2; i<=n/2; i++) 
                    {
                        if(n%i==0) 
                        {
                            prime=0;
                            break;
                        }
                    }
                }
                if(prime)
                {
                    printf("Number is Prime\n\n");
                }
                else
                {  
                    printf("Number is Not Prime\n\n");
                }
                break;
            case 5:
                fact=1;
                for (i=1; i<=n; i++) 
                {
                    fact=fact*i;
                }
                printf("Factorial=%ld\n\n", fact);
                break;
            case 6:
                printf("Prime Factors: ");
                int temp=n;
                for (i=2; i<=temp; i++) 
                {
                    while(temp%i==0) 
                    {
                        printf("%d", i);
                        temp=temp/i;
                    }
                }
                printf("\n\n");
                break;
            case 7:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!=7);
    return 0;
}