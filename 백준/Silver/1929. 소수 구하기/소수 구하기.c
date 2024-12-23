#include <math.h>
#include <stdio.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  for (int i = m; i <= n; i++) {
    if (i < 2)
      continue;

    int prime = 1;
    for (int j = 2; j <= sqrt(i); j++) {
      if (i % j == 0) {
        prime = 0;
        break;
      }
    }

    if (prime) {
      printf("%d\n", i);
    }
  }

  return 0;
}