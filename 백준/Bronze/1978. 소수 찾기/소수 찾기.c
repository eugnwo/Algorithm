#include <stdio.h>

int arr[1001];

int main() {
  int n, cnt = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    int prime_cnt = 0;
    for (int j = 1; j <= arr[i]; j++) {
      if (arr[i] % j == 0) {
        prime_cnt++;
      }
    }
    if (prime_cnt == 2) {
      cnt++;
    }
  }

  printf("%d", cnt);
}