#include <stdio.h>
#include <string.h>
struct EMPLOYEE 
{
    char name[50];
    char designation[50];
    char gender[10];
    float salary;
};
int main() 
{
    int n, i;
    struct EMPLOYEE emp[100];
    int male=0, female=0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) 
    {
        printf("Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Gender (Male/Female): ");
        scanf("%s", emp[i].gender);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i=0; i<n; i++) 
    {
        if(strcmp(emp[i].gender, "Male")==0) 
        {
            male++;
        } 
        else if(strcmp(emp[i].gender, "Female")==0) 
        {
            female++;
        }
        if(emp[i].salary>10000) 
        {
            printf("Employee with salary > 10000: %s\n", emp[i].name);
        }
        if(strcmp(emp[i].designation, "AsstManager")==0) 
        {
            printf("Employee with designation AsstManager: %s\n\n", emp[i].name);
        }
    }
    printf("Total number of employees=%d\n", n);
    printf("Male employees=%d\n", male);
    printf("Female employees=%d\n", female);
    return 0;
}