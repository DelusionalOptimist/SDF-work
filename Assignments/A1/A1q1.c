#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    int bookid;
    char authname[20];
    float price;
};
int main ()
{
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct book b[n], *bptr;
    FILE *fp;

    fp = fopen("bookrecord.txt","w");
    if (fp ==  NULL)
    {
        printf("ERROR IN OPENING FILE");
        exit(1);
    }

    int i;
    printf("Enter book details: ");
    for (i=0; i<n; ++i)
    {
        bptr = &b[i];
        printf("\nBook %d:",i+1);
        
        printf("\nBook ID: ");
        scanf("%d",&bptr->bookid);
        
        printf("Author Name: ");
        scanf("%s",bptr->authname);
        
        printf("Price: ");
        scanf("%f",&bptr->price);

        fwrite(bptr,sizeof(struct book), 1, fp);
        if (fwrite!=0)
        {
            printf("\nContent written to file.");
        }
        
    }
    printf("\n\nDetails of the cheapest book: ");
    int min_idx = 0;
    for (i=0; i<n; ++i)
    {
        bptr = &b[i];
        if (bptr->price <= b[min_idx].price)
        {
            min_idx = i;
        }
    }
    fclose(fp);
    
    bptr = &b[min_idx];
    printf("\nBookID: %d",bptr->bookid);
    printf("\nAuthor Name: %s",bptr->authname);
    printf("\nPrice: %f",bptr->price);
    printf("\n\nDetails from file: ");
    
    //Displaying from file
    fp = fopen("bookrecord.txt","r");
    if (fp == NULL)
    {
        printf("ERROR IN OPENING FILE.");
        exit(1);
    }

    i = 0;
    while (fread(bptr, sizeof(struct book),1,fp))
    {
        printf("\nBOOK %d\nBook ID: %d\nAuthor Name: %s\nPrice: %f\n\n",++i,bptr->bookid,bptr->authname,bptr->price);
    }
    fclose(fp);
}