#include <stdio.h>

int main() {
  char operation;
  long long int storage;
  int input_num, distressed, amount;

  scanf("%d %lld", &input_num, &storage);

  distressed = 0;

  for (int i = 0; i < input_num; i++) {
    scanf("%*c");
    scanf("%c %d", &operation, &amount);

    if (operation == '+')
      storage += amount;
    else if (operation == '-') {
      if (amount > storage)
        distressed++;
      else
        storage -= amount;
    }
  }

  printf("%lld %d", storage, distressed);
  return 0;
}