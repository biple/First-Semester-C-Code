/*program to calculate the surface area of a box */
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,h,TSA;
	printf("Enter the length of the box: ");
	scanf("%d", &l);
	printf("Enter the breadth of the box: ");
	scanf("%d", &b);
	printf("Enter the height of the box: ");
	scanf("%d", &h);
	TSA = 2*l*b + 2*b*h + 2*h*l;
	printf("The total surface area of the box is = %d", TSA);
	getch();
	
}
