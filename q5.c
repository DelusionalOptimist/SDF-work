#include <stdio.h>

#define BUFSIZE 1024

int main(void)
{
    static char buffer[BUFSIZE];

    FILE *fptr1, *fptr2;
    
    char ch;

    fptr1 = fopen("File1.txt", "r");
    fptr2 = fopen("File2.txt", "r");
    
    int count = 0;

    while (((ch = getc(fptr1)) != EOF) || ((ch = getc(fptr2)) != EOF))
    {
        while (fgets(buffer, BUFSIZE, fptr1)) 
        {
            printf("%s", buffer);
            break;
        }
        while (fgets(buffer, BUFSIZE, fptr2)) 
        {
            printf("%s", buffer);
            break;
        }
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
