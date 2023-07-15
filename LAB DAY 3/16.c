/*a program to count total numbers of prime number between 1 to given number ‘n’*/
#include<stdio.h>
#include<conio.h>

void main()
{
	 int maximum, flag, count=0, i, j;
	 /* Inputs */
	 printf("Find the number of prime numbers between 1 to : ");
	 scanf("%d", &maximum);
	 
	 /* Generating and counting prime numbers */
	 for(i=2; i<=maximum; i++)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    flag=1;
				    break;
			   }
		  }
		  if(flag==0 && i>=2)
		  {
		   	printf("%d\t",i);
		   	count++;
		  }
	 }
	 printf("\n Prime Count = %d", count);
	 getch();
}
