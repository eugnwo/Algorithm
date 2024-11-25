#include <math.h>
#include <stdio.h>
int main() {
  int canon_x[1000] = {0};
  int canon_y[1000] = {0};
  int person_x[1000] = {0};
  int person_y[1000] = {0};
  int danger[1000] = {0};

  /// 캐논의 개수, 주민 수, 캐논 사거리
  int n, m, r;

  int i, j;

  int answer = 0;

  scanf("%d %d %d", &n, &m, &r);

  /// 캐논의 위치 좌표를 받음
  for (i = 0; i < n; i++) {
    scanf("%d %d", &canon_x[i], &canon_y[i]);
  }

  for (i = 0; i < m; i++) {
    scanf("%d %d", &person_x[i], &person_y[i]);
  }

  for (i = 0; i < n; i++) {
    int distance = 0;
    for (j = 0; j < m; j++) {
      /// 캐논과 주민 좌표 사이의 거리를 구함.
      /// 음수가 나오는 경우에 대비하여 절댓값 함수 사용
      distance = abs(person_x[j] - canon_x[i]) + abs(person_y[j] - canon_y[i]);
      /// 거리가 사거리보다 크다면 1, 아니면 0
      if (distance > r) {
        danger[j] = 1;
      } else {
        danger[j] = 0;
      }
    }
  }

  /// 1이면 주민은 위험함
  for (i = 0; i < m; i++) {
    printf("danger : %d\n", danger[i]);
    if (danger[i] == 1) {
      answer++;
    }
  }

  printf("%d", answer);

  return 0;
}

/*
/// 테스트 케이스
2 4 3
-2 2
1 1
1 0
1 -1
1 -2
2 -2

/// 출력값
danger : 0
danger : 0
danger : 0
danger : 1
1 
*/
