/*program to multiply the matrix using pointer*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void read (int *[], int, int);
void display (int *[],int,int);
void multiply(int *[], int *[], int *[],int,int, int);
void main()
{
	int *m1 [5], *m2 [5], *p[5],r1, c1, r2,c2,i;
	printf ("Enter the order of first matrix : ");
	scanf("%d%d", &r1,&c1);
	printf("Enter the order of second matrix : ");
	scanf("%d%d",&r2,&c2);
	if (c1!=r2)
	{
		printf ("Matrix multiplication not defined.");
		getch();
		exit(0);
	}
	for(i=0;i<r1;i++)
	{
		m1 [i]=(int *) malloc (c1*sizeof(int));	
		p[i]=(int *) malloc(c2*sizeof(int));
	}
	for(i=0;i<r2;i++)		
	m2 [i]=(int *) malloc(sizeof(int)); //m2 m ROW HUNXA tei bara multiply nagrya
	printf ("Enter the elements of first matrix : ");
	read (m1,r1,c1);
	printf("Enter the elements of second matrix : ");
	read (m2,r2,c2);
	multiply (m1,m2,p, r1, c1, c2);
	printf("First matrix is :\n");
	display (m1,r1, c1);
	printf ("Second matrix is : \n");
	display (m2,r2,c2);
	printf ("Product matrix is : \n");
	display (p, r1,c2);
	getch();
	for(i=0;i<r1;i++)
	{
	free (m1[i]);
	free (p[i]);
	}
	for(i=0;i<r2;i++)
	{
		free (m2[i]);
	}
}
void read (int *m[], int r, int c)
{
	int i, j;
	for(i=0;i<r;i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d", (m[i]+j));
		}
	}
}
void display (int *m[], int r, int c)
{
	int i, j;
	for(i=0;i<r;i++)
	{	
		for(j=0; j<c; j++)
		{
			printf("%6d", * (m[i]+j));
		}
		printf("\n");
	}
}
void multiply(int *m1[], int *m2[], int *p[], int r1, int c2, int c1)
{
	int i, j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0; j<c2;j++)
		{
			*(p[i]+j) =0;
			for (k=0; k<c1;k++)
			{
				*(p[i]+j) +=* (m1[i]+k)**(m2[k]+j);
			}
		}
	}
}	

	

