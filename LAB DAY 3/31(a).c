/*a program to find the sum of the following series:
1/1^2 + 1/3^2 */
#include<stdio.h>
#include<conio.h>

void main()
{
    float sum=0, i;
    for (i=1.0; i<=19.0; i+=2)
	{
        sum+=1/(i*i);
    }
    printf("%f", sum);
    getch();
}
