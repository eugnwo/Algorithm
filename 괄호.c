#include <stdio.h>
#include <string.h>

int main() {
  char arr[101];

  scanf("%s", arr);

  int str = strlen(arr);
  int count = 0;

  for (int i = 0; i < str; i++) {
    if (arr[i] == '(') {
      count++;
    } else if (arr[i] == ')') {
      count--;
    }
  }

  if (count == 0) {
    printf("VPS입니다.");
  } else {
    printf("VPS가 아닙니다.");
  }
}
