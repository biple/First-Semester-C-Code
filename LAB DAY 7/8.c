/*Write a program to update the marks of student to 30 whose marks is between 25-29*/
#include <stdio.h>
#include <string.h>

#define MAXBUF 42
#define RESULTFILE "result.txt"
#define RESULTNEWFILE "result_new.txt"

int main(int argc, char **argv)
{
    char buf[MAXBUF+1];
    char str[MAXBUF+1];
    FILE *res;
    FILE *res_new;
    int length;
    int i, j;
    int number;
    char is_first;
    int n_line = 0;

    res = fopen(RESULTFILE, "r");
    res_new = fopen(RESULTNEWFILE, "w");

    if (!res)
    {
        fprintf(stderr, "File not found: %s\n", RESULTFILE);
        return 5;
    }

    while(!feof(res))
        if (fgets(buf, MAXBUF, res) != NULL)
        {
            length = strlen(buf);
            j = 0;
            str[0] = 0;
            is_first = 1;
            n_line++;
            for(i = 0; i < strlen(buf); ++i)
            {
                if (isblank(buf[i]) || buf[i] == '\0' || buf[i] == '\n')
                {
                    str[j] = 0;
                    number = atoi(str);

                    if (is_first)
                        is_first = 0;
                    else
                        fprintf(res_new, " ");

                    if (number >= 25 || number <= 29)
                        fprintf(res_new, "%d", 30);
                    else
                        fprintf(res_new, "%d", number);

                    j = 0;
                }
                else if (isdigit(buf[i]))
                {
                    str[j++] = buf[i];
                }
                else
                {
                    fprintf(stderr, "bad input on line %d '%s'\n", n_line, buf);
                    return 100;
                }
            }
            fprintf(res_new,"\n");
        }

    fclose(res_new);
    fclose(res);
    printf("File edited successfully");
    return 0;
}
