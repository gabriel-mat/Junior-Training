#include <stdio.h>

#define MAX_SIZE 50

int main() {
  int pos, iterator;
  char stones[MAX_SIZE + 1], instructions[MAX_SIZE + 1];

  scanf("%50[^\n]", stones);
  scanf("%*c");
  scanf("%50[^\n]", instructions);

  iterator = pos = 0;

  while (instructions[iterator] != '\0') {
    if (instructions[iterator] == stones[pos])
      pos++;
    iterator++;
  }

  printf("%d", pos + 1);
  return 0;
}