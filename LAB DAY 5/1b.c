/*WAP to calculate simple interest using function (With function returning values and passing no argument*/
#include<stdio.h>
#include<conio.h>
float interest( );
void main()
{
	float i;
	i=interest( );
	printf("Simple Interest = %f",i);
	getch();
}
float interest( )
{
	float p,r,t,SI;
	printf("Enter the principle amount: ");
	scanf("%f",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Enter the time period: ");
	scanf("%f",&t);
	SI=p*r*t/100;
	return(SI);
}
