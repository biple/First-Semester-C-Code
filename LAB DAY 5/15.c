/*WAP to find smallest of N numbers using function*/
#include <stdio.h>

int findSmallest(int *num, int n)
{
	int smallest = num[0], i;
	for (i=0; i<n; i++)
	{
		if (smallest > num[i]) smallest = num[i];
	}
	return smallest;
}

int main()
{
	int n, i;
	printf("Enter N: ");
	scanf("%d", &n);
	
	int num[n];
	printf("Enter %d numbers: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("The smallest number is %d. \n", findSmallest(num, n));
}

