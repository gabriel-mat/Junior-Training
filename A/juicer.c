#include <stdio.h>

int main() {
  long long int sum, size;
  int oranges_num, max_size, max_waste, counter;

  scanf("%d %d %d", &oranges_num, &max_size, &max_waste);

  sum = counter = 0;

  for (int i = 0; i < oranges_num; i++) {
    scanf("%lld", &size);

    if (size <= max_size)
      sum += size;

    if (sum > max_waste) {
      counter++;
      sum = 0;
    }
  }

  printf("%d", counter);

  return 0;
}