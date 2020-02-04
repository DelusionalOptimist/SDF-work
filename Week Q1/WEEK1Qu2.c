#include<stdio.h>
struct stud
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    int i;
    struct stud s[5];

    for (i=0;i<5;++i)
    {
        printf("\n\nEnter student %d details: ",i+1);
        printf("\nEnter Roll No.: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter Name: ");
        gets(s[i].name);
        getchar();
        printf("\nEnter Age: ");
        scanf("%d",&s[i].age);
    }

    printf("\n\nStudent 2 details: ");
    printf("\nRoll No.: ",&s[1].rollno);
    printf("\nName: ",&s[1].name);
    printf("\nAge: ",&s[1].age);
    return 0;
}

