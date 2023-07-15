/*program to convert Celcius to Fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	printf("Enter the temperature in Celcius: ");
	scanf("%f", &c);
	f = (9*c+160)/5;
	printf("The temperature in Fahrenheit is = %f", f);
	getch();
}
