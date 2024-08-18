#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    
    double sqr_t = sqrt(n);
    
    if (sqr_t != (int)sqr_t) {
        answer = -1;
    } else {
        answer = (sqr_t + 1) * (sqr_t + 1);
    }
    
    return answer;
}