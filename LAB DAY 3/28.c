/*a program to generate the following figure: 
ABCDEEDCBA
ABCD  DCBA
ABC    CBA
AB      BA
A        A */
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,l;
    for(i=0;i<=5;i++)
    {
        for(k=65;k<=69-i;k++){
            printf("%c",k);
        }
        for(j=2;j<=i*2+1;j++){
            printf(" ");
        }
        for(l=69-i;l>=65;l--){
            printf("%c",l);
        }
        printf("\n");
    }
    getch();
}
