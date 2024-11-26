#include <stdio.h>

int main() {
  int arr[200][200] = {0};

  /// arr 배열의 값이 바로 변경될 경우 다음번 반복문을 실행할 때 영향을 끼칠 수
  /// 있음. 때문에 arr 배열의 값을 비교하고, temp에 저장한 후 반복문이 모두
  /// 실행되었을 때 temp의 값을 arr 배열로 이동
  int temp[200][200] = {0};
  int n, i, j;
  int answer = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  /// 초반 arr의 값을 temp로 저장하여 temp를 초기화
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      temp[i][j] = arr[i][j];
    }
  }

  while (1) {
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        /// arr[i][j]의 값이 1이면
        /// 상하좌우의 값이 0인지 확인하고, 0이라면 1을 줌
        if (arr[i][j] == 1) {
          if (temp[i - 1][j] == 0) {
            temp[i - 1][j] = 1;
          }
          if (temp[i + 1][j] == 0) {
            temp[i + 1][j] = 1;
          }
          if (temp[i][j - 1] == 0) {
            temp[i][j - 1] = 1;
          }
          if (temp[i][j + 1] == 0) {
            temp[i][j + 1] = 1;
          }
          /// arr[i][j]가 그냥 구름이라면
        } else if (arr[i][j] == 2) {
          int count = 0;
          if (temp[i - 1][j] == 1) {
            count++;
          }
          if (temp[i + 1][j] == 1) {
            count++;
          }
          if (temp[i][j - 1] == 1) {
            count++;
          }
          if (temp[i][j + 1] == 1) {
            count++;
          }

          /// 상하좌우 중 3개 이상의 값이 1이면 그냥 구름(2)를 1로 변경
          if (count >= 3) {
            temp[i][j] = 1;
          }
        }
      }
    }

    /// temp에 저장한 값을 arr로 복사
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        arr[i][j] = temp[i][j];
      }
    }

    /// 시간(초) 증가
    answer++;

    /// 0이 없는지 확인
    int check_zero = 1;
    /// check_zero가 1을 유지할 경우에만 반복문을 실행
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        /// 현재 위치한 값이 0이라면 계속 반복되어야하기 때문에 반복문 종료
        if (arr[i][j] == 0) {
          check_zero = 0;
          break;
        }
      }
    }

    /// check_zero가 1이라면 arr에 0이 없는것 >> 종료
    if (check_zero) {
      break;
    }
  }

  printf("%d", answer);

  return 0;
}

/*
/// 테스트 케이스
4
0 1 0 1
0 2 0 0
0 -1 1 1
0 0 0 0

/// 출력
3
*/
