/*Write a program to find the sum of square of first �n� natural numbers (using all loops)*/
#include<stdio.h>
#include<conio.h>

void main()
{
	//for loop
	int i,n,sum=0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
}

