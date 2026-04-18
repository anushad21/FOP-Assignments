#include <stdio.h>
struct student
{
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};
int main() 
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for(i=0; i<n; i++) 
    {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Enter marks in 3 subjects: ");
        s[i].total=0;
        for(j=0; j<3; j++) 
        {
            scanf("%d", &s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
        s[i].percentage=s[i].total/3.0;
    }
    printf("Student Results:\n");
    for(i=0; i<n; i++) 
    {
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }
    return 0;
}