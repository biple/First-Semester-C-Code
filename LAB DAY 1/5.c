/*program to convert Fahrenheit to Celcius*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float f, c;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &f);
	c = (f-32)*5/9;
	printf("The temperature in Celcius is = %f", c);
	getch();
}
