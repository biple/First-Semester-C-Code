/*a program to read line of text and count number of vowels, consonant, digits, white spaces and other characters*/
#include <stdio.h>
int main() 
{
    int i;
	char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) 
		{
            ++consonant;
        } 
		else if (line[i] >= '0' && line[i] <= '9') 
		{
            ++digit;
        } else if (line[i] == ' ') 
		{
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}
