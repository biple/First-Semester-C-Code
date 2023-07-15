/*program to find simple interest and amount*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float p, t, r, si, a;
	printf("Enter the principle amount: ");
	scanf("%f", &p);
	printf("Enter the time period: ");
	scanf("%f", &t);
	printf("Enter the interest rate: ");
	scanf("%f", &r);
	si = p*t*r/100;
	printf("Simple Interest = %f*%f*%f/100=%f", p,t,r,si);
	a = p + si;
	printf("\nAmount =%f + %f = %f", p, si, a);
	getch();
}
