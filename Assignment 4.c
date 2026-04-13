#include<stdio.h>
void main()
{
    float net, gross, HRA, TA, basic, PT;
    printf("Enter your basic pay: \n");
    scanf("%f", &basic);
    HRA=0.1*basic;
    TA=0.05*basic;
    gross=basic+HRA+TA;
    PT=0.02*gross;
    net=gross-PT;
    printf("Your gross salary is: %.2f\n",gross);
    printf("Your net salary is %.2f\n",net);
}