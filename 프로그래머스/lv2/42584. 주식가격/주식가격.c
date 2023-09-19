#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// SIZE 크기 정하기
typedef struct Stack{
    int value;
    int idx;
}Stack;

Stack s[100002];
int sIdx = -1;

int empty(){
    if(sIdx < 0 ) return 1; // 비어있을때 1을 리턴
    return 0;  // 비지 않을 때
}

void push(int value, int idx){
    sIdx++;
    s[sIdx].value = value;
    s[sIdx].idx = idx;
}

int top(){
    return s[sIdx].value;
}
Stack pop(){
    return s[sIdx--];
}


// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * len);

    push(prices[0], 0);
    for (int i = 1; i < len; i++) {
        int price = prices[i];
        if (top() > price) {
            while (!empty() && top() > price) {
                Stack temp = pop();
                answer[temp.idx] = i - temp.idx;
            }
            push(price, i);
        }
        else {
            push(price, i);
        }
    }

    while(!empty()) {
        Stack temp = pop();
        answer[temp.idx] = len - 1 - temp.idx;
    }

    /*for (int i = 0; i < len; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");*/

    return answer;
}
    