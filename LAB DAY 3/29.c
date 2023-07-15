/*Write a program to generate the number as:
	123454321
     1234321
      12321
       121
        1*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,space=0;
    for(i=5; i>=1; i--)
	{
        for(j=1; j<=space; j++)
        printf(" ");
         for(j=1; j<=i; j++)
        printf("%d",j);
         for(j=i-1; j>=1; j--)
        printf("%d",j);
     printf("\n");
    space++;
    }
    getch();

}
