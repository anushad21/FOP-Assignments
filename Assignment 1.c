#include<stdio.h>
void main()
{
    int a;
    printf("Enter any year: \n");
    scanf("%d", &a);
    if (a%400==0 ||(a%4==0 && a%100!=0))
    {
        printf("The given year is a leap year.");  
    }
    else
    {
        printf("The given year is not a leap year.");
    }
}