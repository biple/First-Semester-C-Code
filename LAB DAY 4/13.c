/*a program to read salary of N employees and count the numbers of employee receiving salaries between 40000 to 60000*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int salary[10],i,n,count=0;
	printf("Input the number of the employees: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Input salary of employee:");
		scanf("%d",&salary[i]);
	}
	for(i=0;i<n;i++)
	{
		if(salary[i]>40000&&salary[i]<=60000)
		{
			count=count+1;
		}
	}
	printf("Number of employees getting salary between 40000-60000=%d",count);
	getch();
}
