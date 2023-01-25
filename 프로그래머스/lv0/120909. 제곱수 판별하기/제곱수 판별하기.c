#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
int answer = 0;
double ca = pow((double)n, 0.5);
if (ca - (int)ca == 0) {
answer = 1;
} else {
answer = 2;
}
return answer;
}