#include <stdio.h>
#include <string.h>
int main() {
  int n, q, i, j, k;

  scanf("%d %d", &n, &q);

  /// 적어놓은 이름
  char name[n][101];

  /// 적어놓은 번호
  char number[n][101];

  /// 기억하는 번호
  char re_number[q][101];

  /// 정렬 과정에서 값을 옮겨놓기 위한 배열
  char temp[n];

  for (i = 0; i < n; i++) {
    scanf("%s %s", name[i], number[i]);
  }

  for (i = 0; i < q; i++) {
    scanf("%s", re_number[i]);
  }

  /// 받은 이름을 바탕으로 이름과 번호를 오름차순으로 정렬
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      /// strcmp는 문자열을 비교할 때 아스키 코드로 비교함
      /// name[i]이 name[j]보다 순서가 뒤라면 양수 아니면 음수
      if (strcmp(name[i], name[j]) > 0) {
        /// 이름과 전화번호 모두 정렬
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);

        strcpy(temp, number[i]);
        strcpy(number[i], number[j]);
        strcpy(number[j], temp);
      }
    }
  }

  for (i = 0; i < q; i++) {
    int found = 0; /// 1이면 일치하는 번호가 있음, 아니면 없음
    for (j = 0; j < n; j++) {
      int correct_count = 0; // 몇 개의 단어가 일치하는지 확인

      /// 번호의 문자 수만큼 반복
      for (k = 0; k < strlen(number[j]); k++) {
        /// 물음표도 같은 경우 일치하는 것으로 판단
        /// 적어둔 번호와 기억하는 번호가 같은지 확인
        if (number[j][k] == re_number[i][k] || number[j][k] == '?') {
          correct_count++;
        }
      }

      /// 단어가 모두 일치하는 경우
      if (correct_count == strlen(number[j])) {
        printf("%s ", name[j]);
        /// 이미 출력한 이름은 1로 설정하여 다시 검색하지 않
        found = 1;
      }
    }

    /// 일치하는 번호가 없는 경우
    if (!found) {
      printf("NO");
    }

    /// 기억하는 번호 1개를 이미 다 확인했을 때
    printf("\n");
  }

  return 0;
}
