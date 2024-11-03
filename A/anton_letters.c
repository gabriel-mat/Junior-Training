#include <stdio.h>

int main() {
  char c;
  int abc[26], counter;

  for (int i = 0; i < 26; i++)
    abc[i] = 0;

  counter = 0;

  do {
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
      if (abc[c - 'a'] == 0) {
        abc[c - 'a'] = 1;
        counter++;
      }
    }
  } while (c != '\n');

  printf("%d", counter);

  return 0;
}