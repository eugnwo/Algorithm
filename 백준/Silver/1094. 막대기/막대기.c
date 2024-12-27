#include <stdio.h>

int main() {
  int stick = 64, n, cnt = 0;

  scanf("%d", &n);

  while (n > 0) {
    if (stick > n) {
      stick /= 2;
    } else {
      cnt++;
      n -= stick;
    }
  }

  printf("%d", cnt);
}