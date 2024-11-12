#include <stdio.h>

int main() {
  int par;
  long long int n, k;

  scanf("%lld %lld", &n, &k);

  par = n % 2;

  switch (par) {
  case 0:
    if (k <= n / 2)
      printf("%lld", 2 * k - 1);
    else
      printf("%lld", 2 * (k - n / 2));
    break;

  case 1:
    if (k <= (n + 1) / 2)
      printf("%lld", 2 * k - 1);
    else
      printf("%lld", 2 * (k - (n + 1) / 2));
    break;
  }

  return 0;
}