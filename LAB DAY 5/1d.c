/*WAP to calculate simple interest using function (with function returning no values and passing no arguments*/
#include<stdio.h>
#include<conio.h>

void interest( );
void main()
{
	interest( );
	getch();
}
void interest( )
{
	float p,t,r,si;
	printf("Enter the principle amount: ");
	scanf("%f",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Enter the time period: ");
	scanf("%f",&t);

	si=p*t*r/100;
	printf("The simple interest is: %f ",si);
	return(si);
}
