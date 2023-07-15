/*a program to read N numbers in an array and then increment the elements by constant C, where C is entered by users*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],n,i,j,c;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("Enter the increment value: ");
	scanf("%d",&c);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements after the increment by %d are: \n",c);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+c;
		printf("%6d",a[i]);
	}
	getch();
}
