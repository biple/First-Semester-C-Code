/*program to read marks obtained in your final exams in all subjects and find total marks, percentage, results (pass or fail), division.*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
void main()
{
    int rl,math,phy,cp,it,dl,total;
    float per;
    char nm[20],div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of Math, Physics, C-Programming, Introduction to Information Technology, Digital Logic : ");
    scanf("%d%d%d%d%d",&math,&phy,&cp,&it,&dl);
    total = math+phy+cp+it+dl;
    per = total/5.0;
    
    if(per>=80)
    strcpy(div,"Distinction");
    else if(per<80&&per>=60)
    strcpy(div,"First");
    else if(per<60&&per>=48)
    strcpy(div,"Second");
    else if(per<48&&per>=36)
    strcpy(div,"Pass");
    else
    strcpy(div,"Fail");
    
    printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
       printf("Marks in Math : %d\nMarks in Physics : %d\nMarks in C-Programming : %d\nMarks in Introduction to Information Technology :%d\nMarks in Digital Logic : %d\n",math,phy,cp,it,dl);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
       getch();  
}
