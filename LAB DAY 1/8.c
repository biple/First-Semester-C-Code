/*program to find the sum of 3 digit number*/
#include<stdio.h>
#include<conio.h>
void main()

{
	int n,u,t,th;
	printf("Enter a three digit number: ");
	scanf("%d", &n);
	u = n/100;
	t = (n%100)/10;
	th = (n%100)%10;
	printf("The sum of the digits is = %d", u+t+th);
	getch();
}
