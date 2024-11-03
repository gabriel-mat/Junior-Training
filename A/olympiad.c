#include <stdio.h>

#define MAX_SIZE 5000

typedef int students;

enum skills { programming = 1, maths, pe };

int minimum(int a, int b, int c);

int main() {
  int num, input, prog_counter, maths_counter, pe_counter, min;
  students PROG[MAX_SIZE], MATH[MAX_SIZE], PE[MAX_SIZE];

  scanf("%d", &num);

  prog_counter = maths_counter = pe_counter = 0;

  for (int i = 0; i < num; i++) {
    scanf("%d", &input);

    if (input == programming)
      PROG[prog_counter++] = i + 1;
    else if (input == maths)
      MATH[maths_counter++] = i + 1;
    else if (input == pe)
      PE[pe_counter++] = i + 1;
  }

  min = minimum(prog_counter, maths_counter, pe_counter);

  printf("%d\n", min);

  for (int i = 0; i < min; i++)
    printf("%d %d %d\n", PROG[i], MATH[i], PE[i]);

  return 0;
}

int minimum(int a, int b, int c) {
  int n;

  n = a;

  if (b < n)
    n = b;

  if (c < n)
    n = c;

  return n;
}