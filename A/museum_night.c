#include <stdio.h>

#define MAX_SIZE 100

int mod(int n);

int main() {
  int rotations, iterator, diff, half;
  char str[MAX_SIZE + 1], previous;

  scanf("%100[^\n]", str);

  half = 13;
  previous = 'a';
  iterator = rotations = 0;

  while (str[iterator] != '\0') {
    diff = mod(str[iterator] - previous);

    if (diff > half)
      diff = 26 - diff;

    previous = str[iterator];
    rotations += diff;
    iterator++;
  }

  printf("%d", rotations);
  return 0;
}

int mod(int n) {
  if (n < 0)
    n = -n;

  return n;
}