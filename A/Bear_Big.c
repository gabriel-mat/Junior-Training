#include <stdio.h>

int main() {
  int counter;
  long long int limak, bob;

  scanf("%lld %lld", &limak, &bob);

  counter = 0;

  while (limak <= bob) {
    limak *= 3;
    bob *= 2;
    counter++;
  }

  printf("%d", counter);

  return 0;
}