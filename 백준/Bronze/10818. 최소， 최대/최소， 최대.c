#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    scanf("%d", &N);
    int *a = (int*)malloc(sizeof(int) * N);

    // 입력 받은 값을 배열에 저장
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    // min과 max를 배열의 첫 번째 요소로 초기화
    int min = a[0];
    int max = a[0];

    // 배열을 순회하면서 min과 max 업데이트
    for (int i = 1; i < N; i++) {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }

    printf("%d %d", min, max);

    // 동적으로 할당된 메모리 해제
    free(a);

    return 0;
}





