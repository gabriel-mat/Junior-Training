#include <stdio.h>

#define MAX_LENGTH 100

void ShiftStr(char *str, char *base, int shamt);

int main() {
  char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./", mode,
       input[MAX_LENGTH + 1];

  scanf("%c", &mode);
  scanf("%*c");

  scanf("%100[^\n]", input);

  switch (mode) {
  case 'L':
    ShiftStr(input, keyboard, +1);
    break;

  case 'R':
    ShiftStr(input, keyboard, -1);
    break;
  }

  printf("%s", input);

  return 0;
}

void ShiftStr(char *str, char *base, int shamt) {
  int i = 0;

  while (str[i] != '\0') {
    for (int j = 0; j < 30; j++) {
      if (str[i] != base[j])
        continue;

      str[i] = base[j + shamt];
      break;
    }

    i++;
  }
}