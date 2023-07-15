/*WAP to write roll no, name of marks obtained in computer of students in a file student.dat*/
#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[50];
    int roll;
    float marks;
} employee;

int main()
{
    int n, i, chars;
    FILE *fp;

    fp = fopen("student.dat", "wb");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d \n", i + 1);

        fflush(stdin);

        printf("Name: ");
        gets(employee.name);

        printf("Roll no: ");
        scanf("%d", &employee.roll);

        printf("Marks in Computer: ");
        scanf("%f", &employee.marks);

        chars = fwrite(&employee, sizeof(employee), 1, fp);
        printf("Number of items written to the file: %d\n", chars);
    }

    fclose(fp);
    return 0;
}
