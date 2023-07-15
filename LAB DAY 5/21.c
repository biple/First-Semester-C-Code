/*WAP to find product of two natural numbers using recursion*/
#include<stdio.h>
#include<conio.h>

int product(int,int);
int main()
{
	int a, b; 
	int p; 
	printf("Enter the two numbers to know the product recursively: ");
	scanf("%d%d",&a,&b);
	
	p=product(a,b); 
	printf("\nThe product of numbers %d and %d is: %d",a,b,p);
	getch();
	return(0);
	
}

int product(int x,int y) 
{
	if(x==1)
	{
		return(y);	
	}
	
	else if(y==1){
		return(x);
	}
	
	else
	{
		return(x+product(x,y-1));
	}
}
