/*Write a program to generate the following output:
*****
****
***
**
* */
#include<stdio.h>
#include<conio.h>

void main()
{
	   int i,j,rows;
   for(i=5;i>=1;i--)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
   getch();
}
