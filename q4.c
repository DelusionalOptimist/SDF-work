#include <stdio.h>
int main(void)
{
    FILE *fptr1, *fptr2;
    char c;

    fptr1 = fopen("File1.txt", "r");
    fptr2 = fopen("File2.txt", "w");
    
    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
    }

    printf("Done!\n");

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
