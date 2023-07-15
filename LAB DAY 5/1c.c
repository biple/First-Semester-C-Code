/*WAP to calculate simple interest using function (with function returning no values and passing arguments)*/
#include<stdio.h>
#include<conio.h>
void interest(float,float,float);
void main()
{
	float p,t,r;
	printf("Enter Principle amount: ");
	scanf("%f",&p);
	printf("Enter rate of interest: ");
	scanf("%f",&r);
	printf("Enter time period: ");
	scanf("%f",&t);

	interest(p,t,r);
	getch();
}
void interest(float P, float T, float R)
{
	float SI;
	SI=P*T*R/100;
	printf("Simple interest = %f",SI);
}
