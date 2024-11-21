#include <stdio.h>

int main() {
  int arr[1001] = {0}, n, k, count;

  scanf("%d %d", &n, &k);

  count = k;

  arr[count] = 1;

  for (int i = 0; i < n; i++) {
    printf("%d\n", count);
    for (int j = 0; j < k; j++) {
      /// 어차피 while문의 count는 한번만 바뀜.
      /// 만약 count가 이미 사용된 숫자라면, 사용되지 않은 숫자가 나올 때까지 count를 증가시킴.
      while (1) {
        count++;
        if (count > n)
          count = 1;
        /// 사용되지 않은 숫자라면 while문에서 나감.
        if (arr[count] == 0)
          break;
      }
      /// 2번째 루프가 종료되기 전 해당 count를 출력함.
      printf("%d %d\n", j, count);
    }
    /// 2번째 루프가 종료되면 arr 배열에 출력한 count가 사용된 수라는 걸 저장함
    arr[count] = 1;
  }
}
