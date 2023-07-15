/*a program to initialize 10 numbers in an array and display them*/
    #include <stdio.h>

	int main() 
	{
  		int values[10], i;

  		printf("Enter 10 integers: ");

  		for(i = 0; i < 10; ++i) 
		{
			scanf("%d", &values[i]);
		}
		printf("Displaying integers:\n");

 		for(i = 0; i < 10; ++i) 
		{
     		printf("%d\n", values[i]);
  		}
  			return 0;
	}
