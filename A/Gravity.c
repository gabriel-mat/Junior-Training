#include <stdio.h>

#define MAX_SIZE 100

void insertion_sort(int *array, int size);

int main() {
  int num_col;
  int columns[MAX_SIZE];

  scanf("%d", &num_col);

  for (int i = 0; i < num_col; i++)
    scanf("%d", &columns[i]);

  insertion_sort(columns, num_col);

  for (int i = 0; i < num_col; i++)
    printf("%d ", columns[i]);

  return 0;
}

void insertion_sort(int *array, int size) {
  int key, j;

  for (int i = 1; i < size; i++) {
    j = i - 1;
    key = array[i];

    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j--;
    }

    array[j + 1] = key;
  }
}