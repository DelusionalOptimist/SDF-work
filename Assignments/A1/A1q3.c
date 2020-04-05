#include<stdio.h>
#include<stdlib.h>
 
typedef struct node {
    int coeff;
    int pow;
    struct node * next;
} poly;
 
void create_poly(poly **);
void show_poly(poly *);
void add_poly(poly **, poly *, poly *);

int main(void) {
    int ch;
    do {
        poly * poly1, * poly2, * poly3;
 
        printf("\n1st expression\n");
        create_poly(&poly1);
        printf("\nStored 1st expression");
        show_poly(poly1);
 
        printf("\n2nd expression\n");
        create_poly(&poly2);
        printf("\nStored 2nd expression");
        show_poly(poly2);
 
        add_poly(&poly3, poly1, poly2);
        show_poly(poly3);
 
        printf("\n\nDo you want to add two more expressions? [Yes = 1/No = 0]: ");
        scanf("%d", &ch);
    } while (ch);
    return 0;
}

void create_poly(poly ** node) {
    int flag; 
    int coeff, pow;
    poly * tmp_node; 
    tmp_node = (poly *) malloc(sizeof(poly)); 
    *node = tmp_node; 
        do {
        printf("Enter Coeff: ");
        scanf("%d", &coeff);
        tmp_node->coeff = coeff;
        printf("Enter Pow: ");
        scanf("%d", &pow);
        tmp_node->pow = pow;

        tmp_node->next = NULL;
 
        printf("\nContinue adding more terms to the polynomial list?[Y = 1/N = 0]: ");
        scanf("%d", &flag);
        if(flag) {
            tmp_node->next = (poly *) malloc(sizeof(poly)); 
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    } while (flag);
}
 
void show_poly(poly * node) {
    printf("\n\nPolynomial expression :\n");
    while(node != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if(node != NULL)
            printf(" + ");
    }
}
 
void add_poly(poly ** result, poly * poly1, poly * poly2) {
    poly * tmp_node; 
    tmp_node = (poly *) malloc(sizeof(poly));
    tmp_node->next = NULL;
    *result = tmp_node;
 
    while(poly1 && poly2) {
        if (poly1->pow > poly2->pow) {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow) {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
 
        if(poly1 && poly2) {
            tmp_node->next = (poly *) malloc(sizeof(poly));
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    }
 
    while(poly1 || poly2) {
        tmp_node->next = (poly *) malloc(sizeof(poly));
        tmp_node = tmp_node->next;
        tmp_node->next = NULL;
 
        if(poly1) {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if(poly2) {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
    }
 
    printf("\n\nAddition completed");
}