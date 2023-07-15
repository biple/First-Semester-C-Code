/*WAP to read a data file "file1.txt" and then write its all content in another file "file2.txt"
by replacing all occurence of word "bad" by "good" and "television" by "computer"*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *f1,*f2;
	char word[15];
	f1=fopen("file01.txt","r");
	if (f1==NULL)
	{
		printf("Error1!");
		getch();
		return;
	}
	f2=fopen("file02.txt", "w");
	if (f2==NULL)
	{
		printf("Error2!");
		getch();
		return;
	}
	while (fscanf(f1,"%s", word) !=EOF)
	{
		if (strcmp(word,"bad")==0)
		strcpy(word, "good ");
		else if(strcmp(word,"television")==0)
		{
			strcpy(word, "computer ");
		}
		fprintf(f2,"%s", word);
	}
	fclose(f1);
	fclose(f2);
	printf("File edited successfully...");
}

