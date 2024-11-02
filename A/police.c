#include <stdio.h>

int main() {
  int events_num, untreated, input, free;

  scanf("%d", &events_num);

  untreated = free = 0;

  for (int i = 0; i < events_num; i++) {
    scanf("%d", &input);

    if (input == -1) {
      // a crime has occurred

      if (free == 0)
        untreated++;
      else
        free--;
    } else
      free += input;
  }

  printf("%d", untreated);
    
  return 0;
}