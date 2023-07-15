/*a program to read coefficient of quadratic equation and finds all its roots*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	double n1, n2, n3, b, x1, x2, real, imag;
	printf("Enter the coefficients of the quadratic equation: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	b = n2 * n2 - 4 * n1 * n3;
	if(b>0)
	{
		x1 = (-n2+ sqrt(b))/2*n1;
		x2 = (-n2- sqrt(b))/2*n1;
		printf("x1= %.2lf and x2= %.2lf", x1, x2);
	}
	else if(b == 0)
	{
		x1 = x2 = -n2 / (2 * n1);
        printf("x1 = x2 = %.2lf;", x1);
	}
	else
	{
		real = -n2 / (2 * n1);
        imag = sqrt(-b) / (2 * n1);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi", real, imag, real, imag);
    }
	getch();
}

