/*Write a program to check whether givennumber is prime or not.*/
#include <stdio.h>
#include <conio.h>
void main() 
{
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) 
  {
    // condition for non-prime
    if (n % i == 0) 
	{
      flag = 1;
      break;
    }
  }

  if (n == 1) 
  {
    printf("1 is neither prime nor composite.");
  } 
  else if (n<0)
  {
  	printf("%d is not a positive integer.", n);
  }
  else 
  {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

  getch();
}
