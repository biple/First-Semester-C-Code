/*a program to find the smallest number using pointer*/
#include<stdio.h>
int main()
{
    int a[100],*s,i,small,n;
    s=&a[0];
    
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter %d Elements:\n",n);
      for(i=0;i<n;i++,s++)
            scanf("%d",s);
      s=&a[0];
      small=*s;
      for(i=0;i<n;i++,s++)
            if(*s<small)
                  small=*s;
    printf("\nSmallest Element : %d",small);
    return 0;
}
