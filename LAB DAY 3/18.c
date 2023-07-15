/*a program to display multiplication table up to ‘n’ */
#include<stdio.h>
#include<conio.h>

void main()
{
	 int n, i, j, product;
	 printf("Enter the limit of multiplication table: ");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			   product = i*j;
			   printf("%d \t",product);
		  }
		  printf("\n");
	 }
	 getch();
}

