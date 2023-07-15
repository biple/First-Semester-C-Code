/*WAP to replace all occurrence of word "bad" by "good" in file myfile.txt*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *f1,*f2;
	char word[15];
	f1=fopen("myfile.txt","r");
	if (f1==NULL)
	{
		printf("Error1!");
		getch();
		return;
	}
	f2=fopen("temp.txt", "w");
	if (f2==NULL)
	{
		printf("Error2!");
		getch();
		return;
	}
	while (fscanf(f1,"%s", word) !=EOF)
	{
		if (strcmp(word,"bad")==0)
		{
			strcpy(word, "good ");
		}
		fprintf(f2,"%s", word);
	}
	fclose(f1);
	fclose(f2);
	remove("myfile.txt");
	rename("temp.txt","myfile.txt");
	printf("File edited successfully");
}
