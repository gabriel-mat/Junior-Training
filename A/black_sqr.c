#include <stdio.h>

int main() {
  char c;
  int total_wasted, c1, c2, c3, c4, input;

  scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
  scanf("%*c");

  total_wasted = 0;

  do {
    scanf("%c", &c);

    input = c - '0';

    switch (input) {
    case 1:
      total_wasted += c1;
      break;

    case 2:
      total_wasted += c2;
      break;

    case 3:
      total_wasted += c3;
      break;

    case 4:
      total_wasted += c4;
      break;
    }
  } while (c != '\n');

  printf("%d", total_wasted);

  return 0;
}