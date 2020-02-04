#include<stdio.h>
struct marks
{
    int rollno;
    char name[20];
    int marks;
};
int main()
{
    int i;
    int a=0,b=0,c=0,d=0;
    struct marks s[10];
    for (i=0;i<10;++i)
    {
        printf("\n\nEnter student %d details: ",i+1);
        printf("\nEnter Roll No.: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter Name: ");
        gets(s[i].name);
        getchar();
        printf("\nEnter Marks: ");
        scanf("%d",&s[i].marks);
    }
    for (i=0;i<10;++i)
    {
        if (s[i].marks>=60)
        {
            ++a;
        }
        else if (s[i].marks<60 && s[i].marks>=50)
        {
            ++b;
        }
        else if (s[i].marks<50 && s[i].marks>=40)
        {
            ++c;
        }
        else if (s[i].marks<40)
        {
            ++d;
        }
    }
    printf("\nNumber of students with marks>=60: %d",a);
    printf("\nNumber of students with marks<60 but >=50: %d",b);
    printf("\nNumber of students with marks<50 but >=40: %d",c);
    printf("\nNumber of students with marks<40: %d",d);
    return 0;
}

