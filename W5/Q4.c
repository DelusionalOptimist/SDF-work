#include <stdio.h>

struct Stack {
  int top;
  unsigned capacity;
  int *array;
};

void push(Stack);
void pop(Stack);