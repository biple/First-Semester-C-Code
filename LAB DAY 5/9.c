/*WAP to find roots of quadratic equation using function*/ 
#include <math.h>
#include <stdio.h>
 
void findRoots(int a, int b, int c)
{
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
	if (a == 0) 
	{
        printf("Invalid");
        return;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) 
	{
        printf("Roots are real and different \n");
        printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),
               (double)(-b - sqrt_val) / (2 * a));
    }
    else if (d == 0) 
	{
        printf("Roots are real and same \n");
        printf("%f", -(double)b / (2 * a));
    }
    else
    {
        printf("Roots are complex \n");
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a));
               sqrt_val/(2 * a), -(double)b / (2 * a), sqrt_val/(2 * a);
    }
}
int main()
{
    int a,b,c;
    findRoots(a, b, c);
    return 0;
}