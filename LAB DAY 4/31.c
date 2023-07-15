/*a program to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order.*/
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,count = 6;
    char str[25][25] = {"aman", "akesh", "anish", "anam", "anil", "anju"},temp[25];
    
    for(i=0;i<=count;i++){
        for(j=i+1;j<=count;j++){
        if(strcmp(str[i],str[j])<=0)
            continue;
        strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
        }
    }
    printf("Order of Sorted Strings:");
    for(i=0;i<=count;i++)
        puts(str[i]);

    return 0;
}
