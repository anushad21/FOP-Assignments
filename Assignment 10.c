#include <stdio.h>

int main()
{
    int choice;
    double num1, num2, result;
    int i, n;
    int fact;
    while(1) 
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Factorial\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &num1, &num2);
                result=num1+num2;
                printf("Result=%.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &num1, &num2);
                result=num1-num2;
                printf("Result=%.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &num1, &num2);
                result=num1*num2;
                printf("Result=%.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &num1, &num2);
                if(num2!=0) 
                {
                    result=num1/num2;
                    printf("Result=%.2lf\n", result);
                } 
                else 
                {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5:
                printf("Enter base (x): \n");
                printf("Enter exponent (y): \n");
                scanf("%lf", &num1);
                scanf("%1f", &num2);
                result=1;
                for(i=0; i<(int)num2; i++) 
                {
                    result*=num1;
                }
                printf("Result=%.2lf\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);
                if(n<0) 
                {
                    printf("Error: Factorial not defined for negative numbers!\n");
                } 
                else 
                {
                    fact=1;
                    for(i=1; i<=n; i++) 
                    {
                        fact*=i;
                    }
                    printf("Result=%d\n", fact);
                }
                break;
            case 7:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}