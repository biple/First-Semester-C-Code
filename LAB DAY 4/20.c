/*a program to convert string into upper case without using function*/
#include<stdio.h> 
#include<conio.h>
int main()
{
	char str[100];
	int i;
 
	printf("Please Enter a String to convert it into Uppercase :  ");
	gets(str);
 
 	i = 0;
	while (str[i] != '\0') 
	{
    	if (str[i] >= 'a' && str[i] <= 'z') 
		{
        	str[i] = str[i] - 32;
    	}
      	i++;
	}
 
	printf("\n The given String in Upper Case = %s", str);
 
	getch();
}
