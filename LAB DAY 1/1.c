/*Program to find the perimeter of a rectangle*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int l, b, a, p;
	printf("Enter length of the rectangle: ");
	scanf("%d", &l);
	printf("Enter breadth of the rectangle: ");
	scanf("%d", &b);
	area = l*b;
	printf("Area of rectangle = %d*%d=%d", l,b,a);
	p = 2*l+2*b;
	printf("Perimeter of rectangle = 2*%d+2*%d=%d", l, b, p);
	getch();
}
