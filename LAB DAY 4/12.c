/*a program to read N numbers and display only prime numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[10],n,i,j,c=0,prime[10],t=0;
     printf("Input the size of array: ",n);
     scanf("%d",&n);
     printf("Enter %d Numbers in Array:\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               prime[t]=a[i];
               t++;
          }
     }
     printf("\nPrime Numbers in Above Array:\n");
     for(i=0;i<t;i++)
     {
        printf(" %d ",prime[i]);
     }
     getch();
}
