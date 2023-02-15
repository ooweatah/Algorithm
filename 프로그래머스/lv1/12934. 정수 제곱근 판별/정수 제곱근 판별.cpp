#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long double po = pow(n,0.5);
    if(po-(int)po ==0){
        answer = (po+1)*(po+1);
    }
    else answer = -1;
    return answer;
}