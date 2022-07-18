#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int sum = 0;

    for (int i = left; i <= right; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) sum += 1;
            else sum += 0;
        }
        if (sum % 2 == 0) answer += i;
        else answer -= i;
        sum = 0;
    }
    return answer;
}

int main(void) {
    solution(13, 17);
}