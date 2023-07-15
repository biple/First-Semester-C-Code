/*program to convert a lowercase letter to an uppercase letter*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	printf("Enter a lowercase character: ");
	scanf("%c", &c);
	
	 if(c>='a'&&c<='z')
	 {
		  c = c-32;
		  printf("Uppercase is: %c", c);
	 }
	 else
	 {
	  	printf("It is not lowercase character.");
	 }
	
	 getch();
}
