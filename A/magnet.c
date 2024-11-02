#include <stdio.h>

int main() {
  int last, current, groups_counter, num_magnets;

  scanf("%d", &num_magnets);

  last = -1;
  groups_counter = 0;

  for (int i = 0; i < num_magnets; i++) {
    scanf("%d", &current);

    if (current != last)
      groups_counter++;

    last = current;
  }

  printf("%d", groups_counter);

  return 0;
}