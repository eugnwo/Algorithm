#include <stdio.h> 

int ans1[101][101], ans2[101][101];

int main() {
  int n, m;

  scanf("%d %d", &n, &m);
  
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        scanf("%d", &ans1[i][j]);
      }
    }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &ans2[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", ans1[i][j] + ans2[i][j]);
    }
    printf("\n");
  }
}