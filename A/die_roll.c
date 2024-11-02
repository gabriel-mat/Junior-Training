#include <stdio.h>

int highest(int n, int m);
int smallest(int n, int m);
void irreducible(int *n, int *d);

int main() {
  int y_roll, w_roll, highest_roll, numerator, denominator;

  scanf("%d %d", &y_roll, &w_roll);

  highest_roll = highest(y_roll, w_roll);

  numerator = 7 - highest_roll;
  denominator = 6;

  irreducible(&numerator, &denominator);

  printf("%d/%d", numerator, denominator);

  return 0;
}

int highest(int n, int m) {
  if (n >= m)
    return n;
  return m;
}

int smallest(int n, int m) {
  if (n <= m)
    return n;
  return m;
}

void irreducible(int *n, int *d) {
  int max;

  max = smallest(*n, *d);

  for (int i = 2; i <= max; i++) {
    if (*n % i == 0 && *d % i == 0) {
      *n /= i;
      *d /= i;
    }
  }
}