#include<stdio.h>
#include<conio.h>

int main()
{
	 int n, i;
	 float num, sm;
	 printf("How many numbers?\n");
	 scanf("%d",&n);
	 printf("Enter number-1: ");
	 scanf("%f", &num);
	 sm = num;
	 i=2;
	 while(i<=n)
	 {
	  printf("Enter number-%d: ",i);
	  scanf("%f", &num);
	  if(num < sm)
	  {
	   sm = num;
	  }
	  i++;
	 }
	 printf("\nSmallest = %0.2f", sm);
	 getch();
	 return(0);
}

