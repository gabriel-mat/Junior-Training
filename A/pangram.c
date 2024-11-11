#include <stdio.h>

#define MAX_SIZE 100

void strtolow(char *str);

int main() {
  int length, counter, i_diff;
  char str[MAX_SIZE + 1], diff[26];

  scanf("%d", &length);
  scanf("%*c");

  scanf("%100[^\n]", str);
  strtolow(str);

  if (length < 26) {
    printf("NO");
    return 0;
  }

  i_diff = 0;
  diff[0] = str[0];

  for (int i = 1, aux; i < length; i++) {
    aux = 0;

    for (int j = 0; j <= i_diff; j++) {
      if (str[i] == diff[j]) {
        aux = 1;
        break;
      }
    }

    if (!aux) {
      i_diff++;
      diff[i_diff] = str[i];
    }
  }

  if (i_diff == 25)
    printf("YES");
  else
    printf("NO");

  return 0;
}

void strtolow(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;

    i++;
  }
}