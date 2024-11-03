#include <stdio.h>

int main() {
  char prev;
  int length, distinct, d;

  scanf("%d %d", &length, &distinct);

  prev = 'a' - 1;
  d = distinct;

  for (int i = 0; i < length; i++) {
    if (d == 0) {
      prev = 'a' - 1;
      d = distinct;
    }
    if (prev < 'z') {
      printf("%c", prev + 1);
      prev++;
    } else {
      printf("a");
      prev = 'a';
    }

    d--;
  }
  return 0;
}