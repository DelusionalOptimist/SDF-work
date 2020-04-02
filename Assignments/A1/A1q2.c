#include <stdio.h>
#include <stdlib.h>

void sort (int *a, int);
void swap(int *a,int *b);

int main()
{
    int n;
    scanf("%d",&n);
    int z[100];
    int v[100];
    int *c;
    c = malloc(n * sizeof(int));
    int i, ei=0, oi=0;
    for (i=0; i<n; ++i)
    {
        scanf("%d", &c[i]);
        if (c[i]%2 == 0)
        {
            z[ei++] = c[i]; 
        }
        else
        {
            v[oi++]= c[i];
        }
    }
    free(c);
    
    int sum = 0;
    printf("\nZ: ");
    sort(z,ei);
    for (i=0; i<ei; ++i)
    {
        printf("%d, ",z[i]);
        sum += z[i];
    }
    printf("Total: %d", sum);
    sum = 0;
    sort(v,oi);
    printf(" V: ");
    for (i=0; i<oi; ++i)
    {
        printf("%d, ",v[i]);
        sum += v[i];
    }
    printf("Total: %d\n", sum);
}

void sort(int *a, int n)
{
    int i,j;
    for (i=0; i<=n-1; ++i)
    {
        for (j=0; j<n-1-i; ++j)
        {
            if (a[j] > a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
