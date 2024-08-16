#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {

    int cnt = 0;
    long long temp = n;
    
    // n의 길이(cnt)를 구함
    while (temp > 0) {
        cnt++;
        temp /= 10;
    }
    
    // answer을 동적할당
    int* answer = (int*)malloc(sizeof(int) * cnt);
    
    for (int i = 0; i < cnt; i++) {
        answer[i] = n % 10;
        n /= 10;
    }
    
    return answer;
}