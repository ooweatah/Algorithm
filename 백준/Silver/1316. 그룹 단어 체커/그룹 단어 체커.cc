#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    char text[101];
    int alpha[26] = { 0 };
    int answer = 0;
    scanf("%d", &N);
    // 첫 글자와 다음 글자가 다른 겨
    for (int i = 0; i < N; i++) {
        scanf("%s", text);
        int alpha[26] = { 0 };
        int group_word = 1;
        for (int j = 0; j < strlen(text); j++) {
            alpha[text[j] - 'a']++; // 텍스트의 길이의 알파벳을 전부 검증하고 ++한다.
            if (text[j] == text[j - 1] && j > 0) alpha[text[j] - 'a']--; // 만약 연속적이라면 하나를 빼준다. 1을 유지시킨다.
            else
            {
                continue; // 연속적이지 않다면 빼지 않는다. 자연스럽게 증가하기 때문
            }
        }
        for (int k = 0; k < 26; k++) {
            if (alpha[k] > 1) {
                group_word = 0;
                break;
            }
        }
        if (group_word) answer++;
    }
    printf("%d", answer);
    return 0;
}