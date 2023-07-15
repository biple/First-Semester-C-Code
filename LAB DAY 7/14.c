/*WAP to delete a record of a student from file "record.dat”*/
#include<stdio.h> 
                                                                            
struct student                                                                  
{                                                                               
 char name[30];                                                                 
 int id, mark;                                                                  
};       

void addrecord()                                                                     
{                                                                               
  struct student stu;  
  FILE *fp;
  char ch;
  fp = fopen("record.dat", "a+");
  printf("\nEnter student id: ");
  scanf("%d", &stu.id);

  printf("\nEnter student name: ");                                               
  scanf("%s", &stu.name);

  printf("\nEnter student mark: ");                                               
  scanf("%d", &stu.mark);

  fprintf(fp, "%d %s %d\n", stu.id, stu.name, stu.mark);
  fclose(fp);
  printf("\nStudent mark is written successfully!");
}

void deleterecord()                                                               
{                                                                               
  struct student stu;                                                           
  FILE *fp, *fp_temp;                                                                     
  int id, status=0;                                                             
  fp = fopen("record.dat", "r+");                                   
  fp_temp = fopen("record_temp.dat", "a+");
  if(fp == NULL)                                                                
  {                                                                             
    printf("\nStudent mark list does not exists!");                             
  }                                                                             
  else                                                                          
  {                                                                             
     printf("\nEnter student id: ");                                            
     scanf("%d", &id);
     while(fscanf(fp, "%d %s %d\n", &stu.id, stu.name, &stu.mark)!=EOF)           
     {                                                           
       if(id != stu.id)                                                         
       { 
         fprintf(fp_temp, "%d %s %d\n", stu.id, stu.name, stu.mark);
       }        
       else
       {
         status =1;
       }                                                                
     }                                                               
     if(status == 1)                                                               
     {                                                                             
       printf("\nStudent mark detail is deleted for student id : %d", id);         
     }             
     fclose(fp);                                                                
     fclose(fp_temp);
     remove("record.dat");
     rename("record_temp.dat", "record.dat");
  }                                                                             
}

void main()
{
  struct student stu;
  int option;
  printf("\nstudent mark details\n-------------------");
  do
  {
  printf("\n1 -> add record\n2 -> delete record\n3 -> exit");
  printf("\nEnter option: ");
  scanf("%d", &option);
  switch(option)
  {
    case 1:
      addrecord();
      break;
    case 2:
      deleterecord();
      break;
    case 3:
      return;
    default:
      printf("\nInvalid option!");
  }
  }while(1);;
}

