#include<stdio.h>
struct marks
{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
int main()
{
    int i,per[15];
    struct marks s[15];

    for (i=0;i<15;++i)
    {
        printf("\n\nEnter student %d details: ",i+1);
        printf("\nEnter Roll No.: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter Name: ");
        gets(s[i].name);
        getchar();
        printf("\nEnter Chemistry Marks: ");
        scanf("%d",&s[i].chem_marks);
        printf("\nEnter Maths Marks: ");
        scanf("%d",&s[i].maths_marks);
        printf("\nEnter Physics Marks: ");
        scanf("%d",&s[i].phy_marks);
    }

    for (i=0;i<15;++i)
    {
        per[i]=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)/300*100;
        printf("\n\nStudent %d percentage: %d",i+1,per[i]);
    }
    return 0;
}

