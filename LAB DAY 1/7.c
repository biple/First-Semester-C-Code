/*program to calculate the area of circle using symbolic constant*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
	float r,a,c;
	printf("Enter the radius: ");
	scanf("%f",&r);
	a = PI*r*r;
	c = 2*PI*r;
	printf("The area of circle is = %f", a);
	printf("\nThe circumeference of the circle is= %f", c);
	getch();
	
}
