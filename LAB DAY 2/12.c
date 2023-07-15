/*a program to read age of a person and display remarks accordingly:*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int age;
	char group[10];
	printf("Input the age of the person: ");
	scanf("%d",&age);
	
	if(age<12)
	strcpy(group,"CHILD");
	else if(age>=12&&age<20)
	strcpy(group,"TEEN");
	else if(age>=20&&age<30)
	strcpy(group,"ADULT");
	else if(age>=30&&age<55)
	strcpy(group,"YOUNG");
	else
	strcpy(group,"OLD");
	
	printf("The age of a person is= %d\nAge Group = %s\n ",age,group);
	getch();
}
