#include<stdio.h>
struct stud
{
    int rollno;
    char name[20];
    int age;
    char address[20];
    int marks;
};
int main()
{
    int i;
    struct stud s[15];

    for (i=0;i<15;++i)
    {
        printf("\n\nEnter student %d details: ",i+1);
        printf("\nEnter Roll No.: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter Name: ");
        gets(s[i].name);
        getchar();
        printf("\nEnter Age: ");
        scanf("%d",&s[i].age);
        printf("\nEnter Marks: ");
        scanf("%d",&s[i].marks);
        printf("\nEnter Address: ");
        gets(s[i].address);
    }

    for (i=0;i<15;++i)
    {
        printf("\n\nStudent %d details: ",i+1);
        printf("\nRoll No.: ",&s[i].rollno);
        printf("\nName: ",&s[i].name);
        printf("\nAge: ",&s[i].age);
        printf("\nAddress:",s[i].address);
        printf("\nMarks: ",&s[i].marks);
    }
    return 0;
}
