#include<stdio.h>
#define SIZE 5
struct stack
{
    int array[SIZE];
    int top;
}s[2];
void push(int,int);
void pop();
void display(int);
void copy_stack();
int main()
{
    int n,disp;
    int n1,n2,choice;
    int x,i;
    s[0].top=-1;
    s[1].top=-1;
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.COPY STACK\n\t5.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n\tWhich stack: ");
                scanf("%d",&n);
                disp=n-1;
                printf("\n\tEnter element to add: ");
                scanf("%d",&x);
                push(disp,x);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                printf("\n\tEnter the index of stack to be displayed: ");
                scanf("%d",&n);
                disp=n-1;
                display(disp);
                break;
            }
            case 4:
            {
                copy_stack();
                printf("\n\tCOPIED SUCCESSFULLY.");
                break;
            }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=5);
    return 0;
}
void push(int n,int x)
{
    if(s[n].top>=SIZE-1)
    {
        printf("\n\tSTACK overflow");
         
    }
    else
    {
        s[n].top++;
        s[n].array[s[n].top]=x;
    }
}
void pop()
{
    if(s[0].top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",s[0].array[s[0].top]);
        s[0].top--;
    }
}
void display(int stackno)
{
    int i;
    if(s[stackno].top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=s[stackno].top; i>=0; i--)
            printf("\n%d",s[stackno].array[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}
void copy_stack()
{
    int i,b;
    for (i=0;i<=s[0].top;++i)
    {
        b=s[0].array[i];
        push(1,b);
    }
}