/*WAP a program to calculate base raised to the power by using function*/
#include<stdio.h>
void calculate_power(int,int);
 
void main() 
{
    int b,e;
    printf("Enter the base:\n");
    scanf("%d",&b);
    printf("Enter the exponent:\n");
    scanf("%d",&e);
    calculate_power(b,e);
}
 
void calculate_power(int b,int e)
{
    int power=1;
    while(e>0)
    {
        power=power*b;
        e--;
    }
    printf("The power of the no = %d",power);
}
