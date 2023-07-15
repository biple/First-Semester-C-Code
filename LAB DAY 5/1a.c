/*WAP to calculate simple interest using function (With function returning values and passing arguments)*/
#include<stdio.h>
float interest(float P,float R, float N)
{
     float SI;
     SI=P*R*N/100;
     return SI;
}      
int main()
{
     float p,n,i,r,Z;
          printf("Enter Principle Amount: ");
          scanf("%f",&p);
          printf("Enter Interest-Rate: ");
          scanf("%f",&r);
          printf("Enter Time Period: ");
          scanf("%f",&n);
          i=interest(p,r,n);
          printf("\nSimple-Interest: %f\n",i);
     return 0;
}
