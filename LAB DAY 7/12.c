/*WAP to read records of employee from file employee.dat using fread() and then display in tabular format. 
Suppose record have field name, age, and salary*/
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

    fp = fopen("employee.dat", "r");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while( fread(&employee, sizeof(employee), 1, fp) == 1 )
    {
        printf("Name: %s \n", employee.name);
        printf("Age: %d \n", employee.age);
        printf("Salary: %.2f \n\n", employee.salary);
    }
    fclose(fp);
    return 0;
}
