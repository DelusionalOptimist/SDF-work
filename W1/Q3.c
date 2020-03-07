#include <stdio.h>
struct dist {
  int feet;
  int inches;
};
int main() {
  struct dist d[2];
  int i, feetsum = 0, isum = 0;
  for (i = 0; i < 2; ++i) {
    printf("\nDistance %d details:", i + 1);
    printf("\nEnter Feet: ");
    scanf("%d", &d[i].feet);
    printf("\nEnter Inches: ");
    scanf("%d", &d[i].inches);
  }
  for (i = 0; i < 2; ++i) {
    feetsum = feetsum + d[i].feet;
    isum = isum + d[i].inches;
  }
  if (isum >= 12) {
    feetsum = feetsum + isum / 12;
    isum = isum % 12;
  }
  printf("\nSum is %d feet and %d inches.", feetsum, isum);
}
