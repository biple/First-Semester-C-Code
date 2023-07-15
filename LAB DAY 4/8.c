/*a program to read N items and sort them in ascending or descending order depending upon user choice*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int number[30];
    int choice, i, j, a, n;
    
    printf("Input 1 for ascending sorting.\n");
    printf("Input 2 for descending sorting.\n");
    printf("Input your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("Input the value of N:\n");
    		scanf("%d",&n);
    		printf("Enter the numbers:\n");
    		        for (i = 0; i < n; ++i)
    		        	scanf("%d", &number[i]);
    	for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                   a =  number[i];
                   number[i] = number[j];
                   number[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
            break;
        		
		case 2:
			printf("Enter the value of N\n");
			scanf("%d", &n);
	        printf("Enter the numbers \n");
			        for (i = 0; i < n; ++i)
			        scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below\n");
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
		break;    
	}  
	getch();
}
