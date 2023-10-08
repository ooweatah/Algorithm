

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char digits[N + 1];  // 숫자를 저장할 문자 배열, null 문자('\0')를 포함해야 함
    scanf("%s", digits);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        // 문자를 정수로 변환하여 합산
        int digit = digits[i] - '0';
        sum += digit;
    }

    printf("%d\n", sum);

    return 0;
}