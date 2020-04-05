#include <stdio.h>
#include <string.h>
struct stack {
  int top;
  int count;
  int data[5];
};
void push(struct stack *s, int r) {
  if (s->top == 4) {
    printf("The stack is full ");
  } else {
    s->top++;
    s->data[s->top] = r;
    s->count++;
  }
};
int pop(struct stack *s) {
  int p;
  if (s->top == -1) {
    printf("The stack is empty");
    return 0;
  } else {
    p = s->data[s->top];
    s->top--;
    s->count--;
    return p;
  }
}
void copy_stack(struct stack *s1, struct stack *s2) {
  while (s1->top != -1) {
    s2->top++;
    s2->data[s2->top] = s1->data[s1->top];
    s2->count++;
    s1->top--;
    s1->count--;
  }
}
void main() {
  int i, d;
  struct stack s1, s2;
  s1.top = -1;
  s1.count = 0;
  s2.top = -1;
  s2.count = 0;

  printf("Enter the data in the array ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &r);
    push(&s1, r);
  }
  for (i = 0; i < 5; i++) {
    printf("%d ", s1.data[i]);
  }
}