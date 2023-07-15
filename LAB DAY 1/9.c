/*program to convert days into years, months and days*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, y, m, d;
	printf("Enter the amount of days: ");
	scanf("%d", &n);
	y = n/365;
	d = d%365;
	m = n/30;
	d = n;
	printf("The number of years = %d", y);
	printf("\nThe number of months = %d", m);
	printf("\nThe number of days = %d", d);
	getch();
}
