/*a menu based program to calculate the area of rectangle, perimeter of rectangle and exit*/
#include<stdio.h>
#include<conio.h>

void main()
{
      int choice,l,w, area , perimeter;
      printf("Input 1 for area of rectangle\n");
      printf("Input 2 for perimeter of rectangle\n");
      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("Input length and width of the rectangle : ");
                 scanf("%d%d",&l,&w);
                 area=l*w;
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  perimeter= 2*l + 2*w;
                  break;    
          }
          if(choice == 1)
          {
          	printf("The area of the rectangle is: %d",area);
		  }
		  else if(choice == 2)
		  {
		  	printf("The perimeter of the rectangle is: %d",perimeter);
		  }
          
          getch();
}
