#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int compare(const void *a, const void *b);

int main() {
  int input[MAX_SIZE], sorted[MAX_SIZE], arrived[MAX_SIZE], size, expected, aux;

  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    scanf("%d", &input[i]);
    sorted[i] = input[i];
    arrived[i] = 0;
  }

  qsort(sorted, size, sizeof(int), compare);

  expected = 0;

  for (int i = 0; i < size; i++) {
    arrived[input[i] - 1] = 1;

    if (arrived[sorted[expected] - 1] == 0)
      printf("\n");
    else {
      aux = sorted[expected] - 1;
      while (aux >= 0 && arrived[aux] == 1) {
        printf("%d ", aux + 1);
        expected++;
        arrived[aux] = 0;
        aux--;
      }
      printf("\n");
    }
  }

  return 0;
}

int compare(const void *a, const void *b) { return (*(int *)b - *(int *)a); }