/*program to print the size of all primitives data types */
#include<stdio.h>
#include<conio.h>
//%zu can be used as unsigned data type
void main()
{
	int aint;
	float afloat;
	double adouble;
	char achar;
   printf("\nThe size of int is = %zu bytes \n", sizeof(aint));
   printf("\nThe size of float is = %zu bytes\n", sizeof(afloat));
   printf("\nThe size of double is = %zu bytes\n", sizeof(adouble));
   printf("\nThe size of char is = %zu bytes\n", sizeof(achar));
   getch();
}
