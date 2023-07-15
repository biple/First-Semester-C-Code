/*a program to read name of N student and display in monitors*/
#include <stdio.h>

int main()
{
    int count, i;
    printf("enter N: ");
    scanf("%d", &count);
    char names[count][50];
    printf("Enter %d names, enter ENTER button after each name\n", count);
    for (i=0; i<=count; i++)
	{
        gets(names[i]);
    }
    printf("The names are :-\n");
    for (i=0; i<=count; i++)
	{
        printf("%s\n", names[i]);
    }
    return 0;
}
