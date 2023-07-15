/*WAP a program to find smallest of three number using function*/
#include<stdio.h>
#include<conio.h>

int min(int, int, int);
int main() 
{
    int num1, num2, num3, minimum;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    minimum = min(num1, num2, num3); 
    printf("Minimum = %d\n", minimum);
    getch();
    return 0;
}
int min(int num1, int num2, int num3)
{
    if(num1 < num2)
    {
    	if(num2 < num3)
    		return num1;
        else
		{
			if(num1 < num3)
				return num1;
			else
				return num3;	
		}    
	}
	else
	{
		if(num2<num3)
			return num2;
		else
		return num3;	
	}
}
