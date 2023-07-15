/* a program to generate the following figure:
	*
   ***
  *****
 *******
  *****
   ***
    * */
#include <stdio.h>
#include<conio.h>

void main()
{
   int i,j;
   for(i=0;i<=4;i++)
   {
     for(j=1;j<=4-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }
 
   for(i=4-1;i>=1;i--)
   {
     for(j=1;j<=4-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }
   getch();
 
}
