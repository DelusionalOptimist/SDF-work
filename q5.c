#include <stdio.h>

int main(void)
{
    FILE *fptr1, *fptr2;
    
    char ch;

    fptr1 = fopen("q5_file_1.", "r");
    fptr2 = fopen("q5_file_2", "r");
    
    int count = 0;

    while ((ch = getc(fptr1)) != EOF || (ch = getc(fptr2)) != EOF)
    {
        if (count % 2 == 0)
        {
            while (ch != '\n')
            {
                printf("%c", ch);
            }
            printf("%c", ch);
            count++;
        }

        else
        {
            while (ch != '\n')
            {
                printf("%c", ch);
            }
            printf("%c", ch);
            count++;
        }
    }
}