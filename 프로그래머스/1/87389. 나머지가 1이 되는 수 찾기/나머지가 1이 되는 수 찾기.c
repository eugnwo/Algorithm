#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int cnt = 1;
    while (1) {
        if (n % cnt == 1) break;
        else cnt++;
    }
    return cnt;
}