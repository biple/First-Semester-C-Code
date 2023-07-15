/*Write a program to reverse a number using function*/
#include<stdio.h>
#include<conio.h>
int reverse(int n)
{
  int sum=0;
  while (n!=0)
  {
    sum = sum*10 + n%10;
    n /= 10;
  }
   return sum;
}
void main()
{  
 int rev, num;
 printf("Enter a Positive Number: ");
 scanf("%d", &num);
 rev = reverse(num);
 printf("The Reverse of given number %d is: %d", num, rev);
 getch();
}
