#include <stdio.h>
void swapValue(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nInside swapValue (Call by Value): a=%d, b=%d\n", a,b);
}
void swapReference(int*x, int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a, b, choice;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("1. Swap using Call by Value\n");
    printf("2. Swap using Call by Reference\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            swapValue(a, b);
            printf("a=%d, b=%d\n", a, b);
            break;
        case 2:
            swapReference(&a, &b);
            printf("a = %d, b = %d\n", a, b);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}