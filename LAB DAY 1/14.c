/*A program to read three different numbers and find the smallest one*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,s;
	printf("Enter three numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	s = a<b?a:b;
	s = c<s?c:s;
	printf("The smallest number is = %d", s);
	getch();
}
