#include <stdio.h>

#define MAX_SIZE 30

int main() {
  int teams, counter;
  int hosts[MAX_SIZE], guests[MAX_SIZE];

  scanf("%d", &teams);

  for (int i = 0; i < teams; i++)
    scanf("%d %d", &hosts[i], &guests[i]);

  counter = 0;

  for (int i = 0; i < teams; i++)
    for (int j = 0; j < teams; j++)
      if (hosts[i] == guests[j])
        counter++;

  printf("%d", counter);

  return 0;
}