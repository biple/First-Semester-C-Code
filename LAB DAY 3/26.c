/* a program to generate the following figure:
	*
   ***
  *****
 ******* */
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   for(i=0;i<=4;i++)
   {
     /* print blank spaces */
     for(j=1;j<=4-i;j++)
	printf(" ");
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       printf("*",j);
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  printf("*",j);
 
     printf("\n");
   }
   getch();
}
