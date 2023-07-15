/*WAP to write a number in a file (my file) and then read it and store all odd numbers in the file odd and even numbers in file even*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int a,n,i;
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("DATA","w");

	if(fp1==NULL)
	{
		printf("File could not open!!");
		exit(0);
	}

	printf("How many numbers?\n");
	scanf("%d",&n);
	printf("Enter contents of DATA file: ");

	for(i=0;i<n;++i)
	{
		scanf("%d",&a);
		putw(a,fp1);
	}

	fclose(fp1);

	fp1=fopen("DATA","r");
	fp2=fopen("ODD","w");
	fp3=fopen("EVEN","w");

	if(fp1==NULL||fp2==NULL||fp3==NULL)
	{
		printf("File could not open!!");
		exit(0);
	}
	while((a=getw(fp1))!=EOF)
	{
		if(a%2!=0)
		putw(a,fp2);
	else
	putw(a,fp3);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	fp2=fopen("ODD","r");
	fp3=fopen("EVEN","r");

	if(fp2==NULL||fp3==NULL)
	{
		printf("File could not open!!");
		exit(0);
	}	

	printf("Contents of ODD file:");
	while((a=getw(fp2))!=EOF)
	printf("%d\t",a);

	printf("\nContents of EVEN file:");
	while((a=getw(fp3))!=EOF)
	printf("%d\t",a);

	fclose(fp2);
	fclose(fp3);
	getch();
}


