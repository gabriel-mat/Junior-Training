#include <stdio.h>

#define MAX_SIZE 100000

typedef int coordinates;

int distance(int x1, int x2);

int main() {
  coordinates X[MAX_SIZE];
  int num, min, max, coord;

  scanf("%d", &num);

  for (int i = 0; i < num; i++)
    scanf("%d", &X[i]);

  for (int i = 0; i < num; i++) {
    if (i == 0) {
      printf("%d ", distance(X[0], X[1]));
      printf("%d\n", distance(X[0], X[num - 1]));
    } else if (i == num - 1) {
      printf("%d ", distance(X[i], X[i - 1]));
      printf("%d\n", distance(X[0], X[num - 1]));
    } else {
      if (distance(X[i], X[i - 1]) <= distance(X[i], X[i + 1]))
        printf("%d ", distance(X[i], X[i - 1]));
      else
        printf("%d ", distance(X[i], X[i + 1]));

      if (distance(X[i], X[0]) >= distance(X[i], X[num - 1]))
        printf("%d\n", distance(X[i], X[0]));
      else
        printf("%d\n", distance(X[i], X[num - 1]));
    }
  }

  return 0;
}

int distance(int x1, int x2) {
  if (x1 >= x2)
    return x1 - x2;
  else
    return x2 - x1;
}