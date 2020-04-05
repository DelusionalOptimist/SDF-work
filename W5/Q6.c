#include <stdio.h>

int main() {
  char exp[100];
  int a[6] = {0, 0, 0, 0, 0, 0}, i = 0, ctr = 0;
  printf("Enter the bracket expression : ");
  gets(exp);
  while (exp[i] != '\0') {
    if (exp[i] == '[')
      a[0]++;
    else if (exp[i] == ']')
      a[1]++;
    else if (exp[i] == '{')
      a[2]++;
    else if (exp[i] == '}')
      a[3]++;
    else if (exp[i] == '(')
      a[4]++;
    else
      a[5]++;
    i++;
  }
  int j;
  for (j = 1; j < i - 1; j++) {
    if (((exp[j - 1] == '[') && ((exp[j] == '}') || (exp[j] == ')'))) ||
        ((exp[j - 1] == '{') && ((exp[j] == ')') || (exp[j] == ']'))) ||
        ((exp[j - 1] == '(') && ((exp[j] == '}') || (exp[j] == ']')))) {
      ctr = 1;
      break;
    }
  }
  if (a[0] == a[1] && a[2] == a[3] && a[4] == a[5] && ctr == 0)
    printf("TRUE");
  else
    printf("FALSE");
  return 0;
}
