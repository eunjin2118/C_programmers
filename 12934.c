#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    long long i;
    int a;
    for (i = 0; i <= n; i++) {
        if (i * i == n) {
            a = 1;
            break;
        }
        else a = 0;
    }
    if (a) answer = (i + 1) * (i + 1);
    else answer = -1;
    return answer;
}