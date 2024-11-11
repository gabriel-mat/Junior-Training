#include <stdio.h>

#define MAX_SIZE 100000

int main() {
  int stewards[MAX_SIZE];
  int num, min, max, counter;

  scanf("%d", &num);

  scanf("%d", &stewards[0]);
  max = min = stewards[0];

  for (int i = 1; i < num; i++) {
    scanf("%d", &stewards[i]);

    if (stewards[i] < min)
      min = stewards[i];
    else if (stewards[i] > max)
      max = stewards[i];
  }

  counter = 0;

  for (int i = 0; i < num; i++)
    if (stewards[i] == min || stewards[i] == max)
      counter++;

  printf("%d", num - counter);

  return 0;
}