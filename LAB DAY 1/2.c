/*program to calculate the value of base to the power*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float b, p, r;
	printf("Enter base of the number: ");
	scanf("%f", &b);
	printf("Enter power of the number: ");
	scanf("%f", &p);
	r = pow(b,p);
	printf("Result is = %f", r);
	getch();	 
	
}
