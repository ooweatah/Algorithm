#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    long double ca = pow(n,0.5);
    if(ca -(int)ca ==0){
        answer = (ca+1)*(ca+1);
        
    }
    else answer = -1;
    return answer;
}
