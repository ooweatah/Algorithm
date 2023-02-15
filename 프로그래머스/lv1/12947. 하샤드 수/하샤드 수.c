#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int temp = x;
    int a,sum =0;
    while(x){
        
        a = x%10;
        sum += a;
        x/= 10;
    }
    if(temp%sum==0) return answer;
    else return false;
}