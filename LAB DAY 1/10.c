/*program to reverse 4 digit number*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n, u, t, th, tenth, r, a;
	printf("Enter a four digit number: ");
	scanf("%d", &n);
	a=n;
	u = n%10;
	n = n/10;
	t = n%10;
	n = n/10;
	th = n%10;
	tenth = n/10;
	r = u*1000 + t*100 + th*10 + tenth;
	printf("The reverse of %d is = %d", a, r);
	getch();
	
 } 
