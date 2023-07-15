/* a program to multiply matrices a A and B.*/
#include <stdio.h>
#include<conio.h>
int main()
{
	int i, j;
    int a[2][3] = {{1, 5, 2},
                   {3, 4, 6}},
        b[3][2] = {{-1, 1},
                   {2, 3},
                   {5, 2}},
        c[2][2];

    int aRows = (sizeof(a)/(sizeof(int)))/(sizeof(a[0])/(sizeof(int))), bCols = (sizeof(b)/(sizeof(int)))/(sizeof(b[0])/(sizeof(int)));
    for (i=0; i<aRows; i++)
	{
        c[i][0] = 0;
        c[i][1] = 0;
        for (j=0; j<bCols; j++)
		{
            c[i][0] += a[i][j] * b[j][0];
            c[i][1] += a[i][j] * b[j][1];
        }
    }

    printf("%d, %d\n%d, %d\n", c[0][0], c[0][1], c[1][0], c[1][1]);
    getch();
}
