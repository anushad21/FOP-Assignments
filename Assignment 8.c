#include <stdio.h>
#include <string.h>
void main() 
{
    char subjects[5][20];
    int marks[5], total=0;
    int passed=1;
    for (int i=0; i<5; i++) 
    {
        printf("Subject %d: ", i+1);
        scanf("%s", subjects[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);
        if (marks[i]<40)
        {
            passed=0;
        }
    }
    if(passed==0)
    {
        printf("Result: FAIL\n");
    } 
    else 
    {
        for(int i=0; i<5; i++)
        {
        total+=marks[i];
        }
        float percentage=(total/500.0)*100;
        printf("Total Marks: %d/500\n", total);
        printf("Percentage: %.2f%%\n", percentage);
        if(percentage>=75) 
        {
            printf("Grade: Distinction");
        } 
        else if(percentage>=60) 
        {
            printf("Grade: First Class");
        } 
        else if(percentage>=45) 
        {
            printf("Grade: Second Class");
        } 
        else if(percentage>=35) 
        {
            printf("Grade: Pass");
        } 
        else 
        {
            printf("Grade: Fail");
        }
    }
}