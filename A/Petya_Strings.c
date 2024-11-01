#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int i, diff, val1, val2;
  char string1[MAX_SIZE + 1], string2[MAX_SIZE + 1];

  scanf("%100[^\n]%*c", string1);
  scanf("%100[^\n]", string2);

  diff = i = 0;

  while (string1[i] != '\0') {
    val1 = string1[i];
    if (val1 >= 97 && val1 <= 122)
      val1 -= 32;

    val2 = string2[i];
    if (val2 >= 97 && val2 <= 122)
      val2 -= 32;

    diff = val1 - val2;

    if (diff)
      break;

    i++;
  }

  if (diff < 0)
    printf("-1");
  else if (diff > 0)
    printf("1");
  else
    printf("0");

  return 0;
}