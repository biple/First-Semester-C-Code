/*WAP to write records of employee in file employee.dat using fwrite(). Suppose record have field name, age, and salary*/
#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[50];
    int age;
    float salary;
} employee;

int main()
{
    int n, i, chars;
    FILE *fp;

    fp = fopen("employee.dat", "wb");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d \n", i + 1);

        fflush(stdin);

        printf("Name: ");
        gets(employee.name);

        printf("Age: ");
        scanf("%d", &employee.age);

        printf("Salary: ");
        scanf("%f", &employee.salary);

        chars = fwrite(&employee, sizeof(employee), 1, fp);
        printf("Number of items written to the file: %d\n", chars);
    }

    fclose(fp);
    return 0;
}
