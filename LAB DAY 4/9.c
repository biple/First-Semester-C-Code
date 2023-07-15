/*a program to read N numbers in an array and find the sum of odd numbers*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int oddSum=0;
	int i,size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
	int arr[size];
    printf("Enter the Array elements:\n");
    for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
    }
    for(i=0;i<size; i++)
    {
    	if(arr[i]%2!=0)
    	{
    		oddSum=oddSum+arr[i];
		}
	}
	printf("The sum of the odd numbers are: %d",oddSum);
    getch();
}
