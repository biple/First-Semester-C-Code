/*program to display sum and average of integers*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
 int sum=0, avg, i;
 int how_many;
 int *p;

 printf ("Enter the amount of numbers: ");
 scanf ("%d",&how_many);

 p = (int *)malloc(how_many * 4);

 if (p == NULL)
 	{
  		printf(" Out of memory!\n");
  		printf ("Press any key to close.");
  		exit(0);
 	}

 for (i=0;i<how_many;i++)
 	{	
  		printf ("Enter %d numbers: ",i+1);
  		scanf ("%d",&p[i]);

  		sum = (sum + p[i]);
 	}

 avg = (sum / how_many);

 printf ("Sum = %d\n\n",sum);
 printf ("Average = %d\n\n",avg);

 free (p);

 printf ("press any key to close.");
 getch();
}

