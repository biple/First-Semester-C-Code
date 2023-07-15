#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	float s,c;
	printf("Input the sales amount: ");
	scanf("%f",&s);
	if(s<5000)
	{
		c=(s*0.0)/100.0;
	}
	else if(s>=5000 && s<10000)
	{
		c=(s*5.0)/100.0;
	}
	else if(s>=10000 && s<15000)
	{
		c=(s*7.0)/100.0;
	}
	else
	{
		c=(s*10.0)/100.0;
	}
	
	printf("Commission acquired by the salesman is %f",c);
	getch();
}
