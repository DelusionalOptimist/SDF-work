#include <stdio.h>

#include <stdlib.h>

#
define SIZE 4

int main(void) {
  int arr[SIZE];
  int top1 = -1;
  int top2 = SIZE;
  char choice1, choice2;
  int elem;

  while (1) {
    printf("Push(1) or Pop(2): ");
    scanf("%i", & choice1);
    switch (choice1) {
    case 1:
      {
        if (top2 - top1 == 1) {
          printf("Stack Overflow (array full) bruh.");
          exit(0);
        } else {
          printf("Stack 1 (1) or Stack 2 (2): ");
          scanf("%i", & choice2);
          switch (choice2) {
          case 1:
            printf("Element?");
            scanf("%i", & elem);
            top1++;
            arr[top1] = elem;
            break;
          case 2:
            printf("Element?");
            scanf("%i", & elem);
            top2--;
            arr[top2] = elem;
            break;
          }
        }
      }
      break;
    case 2:
      printf("Stack 1 (1) or Stack 2 (2): ");
      scanf("%i", & choice2);
      switch (choice2) {
      case 1:
        top1--;
        break;
      case 2:
        top2++;
        break;
      }
      break;
    }
  }
}
