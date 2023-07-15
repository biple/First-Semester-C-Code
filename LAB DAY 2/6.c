/*program to three numbers find the median number*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float n1,n2,n3;
	printf("Enter three numbers: ");
	scanf("%f%f%f",&n1, &n2, &n3);
	if(n1<n2 && n1>n3 || n1>n2 && n1<n3)
	{
		printf("%f is the median", n1);
	}
	else if(n2<n1 && n2>n3 || n2>n1 && n2<n3)
	{
		printf("%f is the median", n2);
	}
	else if(n3<n1 && n3>n1 || n3>n1 && n3<n1)
	{
		printf("%f is the median", n3);
	}
	else
	{
		printf("One or more of your inputs are of same value");
	}

	getch();
}
