/*a program to generate the pyramid of number as
	1
   121
  12321
 1234321  
123454321  */
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   for(i=0;i<=5;i++)
   {
     /* print blank spaces */
     for(j=1;j<=5-i;j++)
	printf(" ");
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       printf("%d",j);
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  printf("%d",j);
 
     printf("\n");
   }
   getch();
}

