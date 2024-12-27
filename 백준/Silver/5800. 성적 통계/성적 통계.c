#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b) { return (*b - *a); }

int main() {
  int k, n;

  scanf("%d", &k);

  for (int i = 0; i < k; i++) {
    scanf("%d", &n);
    int score[101] = {
        0,
    };
    int gap = 0;

    for (int j = 0; j < n; j++) {
      scanf("%d", &score[j]);
    }

    qsort(score, n, sizeof(int), compare);

    for (int j = 0; j < n - 1; j++) {
      int current_gap = score[j] - score[j + 1];
      if (gap < current_gap)
        gap = current_gap;
    }

    printf("Class %d\n", i + 1);
    printf("Max %d, Min %d, Largest gap %d\n", score[0], score[n - 1], gap);
  }

  return 0;
}
