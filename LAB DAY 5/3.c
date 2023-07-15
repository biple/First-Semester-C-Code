/*WAP to find maximum of two number using function*/
#include <stdio.h>

int max(int num1, int num2);

int main() 
{
    int num1, num2, maximum;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2); 
    printf("Maximum = %d\n", maximum);
    return 0;
}
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

