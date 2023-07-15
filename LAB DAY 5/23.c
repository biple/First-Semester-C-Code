/*WAP to generate first n terms of Fibonacci series using recursive function to return Nth term of series*/
#include<stdio.h>
int fib(int );

int main()
{
    int nth, term;
    printf("Enter N: ");
    scanf("%d", &nth);

    term = fib(nth);
    printf("%dth term of Fibonacci series is %d", nth, term);
    return 0;
}

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

