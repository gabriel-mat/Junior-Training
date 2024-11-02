#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int wires[MAX_SIZE], num_wires, shoots_num, fly_l, fly_r, X, Y;

  scanf("%d", &num_wires);

  for (int i = 0; i < num_wires; i++)
    scanf("%d", &wires[i]);

  scanf("%d", &shoots_num);

  for (int i = 0; i < shoots_num; i++) {
    scanf("%d %d", &X, &Y);

    X--;

    fly_r = wires[X] - Y;
    fly_l = wires[X] - fly_r - 1;

    if (X - 1 >= 0)
      wires[X - 1] += fly_l;
    if (X + 1 <= num_wires - 1)
      wires[X + 1] += fly_r;

    wires[X] = 0;
  }

  for (int i = 0; i < num_wires; i++)
    printf("%d\n", wires[i]);

  return 0;
}