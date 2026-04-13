#include<stdio.h>
void main()
{
    int a, b, choice, add, sub, mult, div;
    do
    {
        printf("Choose Your Operation: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. EXIT\n5");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter any 2 numbers: \n");
                scanf("%d%d", &a,&b);
                add=a+b;
                printf("The addition is: %d\n",add);
                break;
            }
            case 2:
            {
                printf("Enter any 2 numbers: \n");
                scanf("%d%d", &a,&b);
                sub=a-b;
                printf("The difference is: %d\n",sub);
                break;
            }
            case 3:
            {
                printf("Enter any 2 numbers: \n");
                scanf("%d%d", &a,&b);
                mult=a*b;
                printf("The product is: %d\n",mult);
                break;
            }
            case 4:
            {
                printf("Enter any 2 numbers: \n");
                scanf("%d%d", &a,&b);
                div=a/b;
                printf("The quotient is: %d\n",div);
                break;
            }
            case 5:
            {
                printf("EXIT\n");
                break;
            }
        }
    }while(choice!=5);
}