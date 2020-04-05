#include<stdio.h>
#include<string.h>
struct stack
{
    int top;
    int count;
    int data[20];
};
void push(struct stack *s , int d)
{
    if(s->top==19)
        printf("The stack is completely full");
    else
    {
        s->top++;
        s->data[s->top]=d;
        s->count++;
    }
}
void pop(struct stack *s)
{
    int i;
    if(s->count<5)
        printf("There are less than 5 elements in the stack");
    else
    {
        for(i=0 ; i<5 ; i++)
        {
            printf("%d\n", s->data[s->top]);
            s->top--;
            s->count--;
        }
    }
}
void main()
{
    struct stack s;
    s.top=-1;
    s.count=0;
    FILE *fp;
    fp=fopen("satyam.txt","r");
    int i;
    int x;
    fscanf(fp,"%d", &x);
    while(x!=EOF);
    {
        if(x>0)
        {
            push(&s,x);
        }
        else
        {
            pop(&s);
        }
        fscanf(fp,"%d", &x);

    }
    printf("The last elements in the stack are \n");
    for(i=0 ; i<s.count ; i++)
    {
        printf("%d\t",s.data[s.top]);
        s.top --;
    }
}
