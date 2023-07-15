/*WAP to find surface area of box using function*/
#include<stdio.h>
#include<conio.h>

void total( );
void main()
{
	total( );
	getch();
}
void total( )
{
	float l,b,h,TSA;
	printf("Enter the length, width and height of box: ");
	scanf("%f %f %f",&l,&b,&h,&TSA);
	
	TSA=2*(l*b+b*h+h*l);
	printf("The total surface area of the box is: %f", TSA);
	return(TSA);
}
