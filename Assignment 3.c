#include<stdio.h>
int main()
{
    int a,i,m;
    printf("Enter any number: \n");
    scanf("%d", &a);
    printf("The multiplication table is: \n");
    for(i=0; i<=10; i++)
    {
        m=a*i;
        printf("%d * %d = %d\n",a,i,m);
    }
    return 0;
}