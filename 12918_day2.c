#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    char a[6];
    bool answer;

    int cnt = 0;
    for (int i = 0; i < 6; i++) {
        a[i] = s[i];
        if (a[i] == "\0") break;
        cnt++;
    }


    if (strlen(s) == 4 || strlen(s) == 6) {
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] < 48 || s[i] > 57) {
                answer = false;
                break;
            }
            else answer = true;
        }
    }
    else answer = false;
    return answer;
}