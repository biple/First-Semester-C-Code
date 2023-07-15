/*WAP to find largest of N numbers using function*/
#include <stdio.h>

int findGreatest(int *num, int n)
{
	int greatest =  num[0], i;
	for (i=0; i<n; i++)
	{
		if (greatest < num[i]) greatest = num[i];
	}
	return greatest;
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
	
	printf("The greatest number is %d. \n", findGreatest(num, n));
}

