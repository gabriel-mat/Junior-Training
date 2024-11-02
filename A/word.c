#include <stdio.h>

#define MAX_SIZE 100

void lowercase(char *string);
void uppercase(char *string);

int main() {
  char str[MAX_SIZE + 1];
  int lower_count, upper_count, iterator;

  scanf("%100[^\n]", str);

  lower_count = upper_count = iterator = 0;

  while (str[iterator] != '\0') {
    if (str[iterator] >= 65 && str[iterator] <= 90)
      upper_count++;
    else
      lower_count++;
    iterator++;
  }

  if (lower_count >= upper_count)
    lowercase(str);
  else
    uppercase(str);

  printf("%s", str);

  return 0;
}

void lowercase(char *string) {
  int i = 0;

  while (string[i] != '\0') {
    if (string[i] >= 65 && string[i] <= 90)
      string[i] += 32;

    i++;
  }
}

void uppercase(char *string) {
  int i = 0;

  while (string[i] != '\0') {
    if (string[i] >= 97 && string[i] <= 122)
      string[i] -= 32;

    i++;
  }
}