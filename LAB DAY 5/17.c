/*Write a program to add two matrices using user defined function*/
#include<stdio.h>
#include<conio.h>

void read(int a[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
        	printf("Enter Element %d %d : ",i,j);
        	scanf("%d",&a[i][j]);
        }
    }
}

void add(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
    		m3[i][j] =  (m1[i][j] + m2[i][j]);
    	}
    }
}

void display(int m[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
        {
        	for(j=1;j<=col;j++)
        	{
            	printf("%d ",m[i][j]);
        	}
        	printf("\n");
        }
}

void main()
{
    int m1[10][10],m2[10][10],m3[10][10],row,col;
    printf("Enter number of rows :");
    scanf("%d",&row);
    printf("Enter number of columns :");
    scanf("%d",&col);
    read(m1,row,col);
    read(m2,row,col);
    add(m1,m2,m3,row,col);
    display(m3,row,col);
    getch();
}
