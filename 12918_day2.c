#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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