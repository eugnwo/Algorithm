#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    int len = strlen(s);
    int* answer = (int*)malloc(sizeof(int) * (len + 1));
    
    answer[0] = -1;
    
    for (int i = 1; i < len; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (s[j] == s[i]) {
                answer[i] = i - j;
                break;
            } else answer[i] = -1;
        }
    }
    answer[len] = NULL;
    
    return answer;
}