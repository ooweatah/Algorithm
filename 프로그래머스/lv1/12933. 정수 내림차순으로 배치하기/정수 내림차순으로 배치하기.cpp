#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long N = 1;
    vector <int> numbers;
    while(n>0){
        numbers.push_back(n%10);
        n = n/10;
    }
    sort(numbers.begin(),numbers.end(),less<int>());
    for(int i =0;i<numbers.size();i++){
        answer += numbers[i] * N;
        N *= 10;
    }
    return answer;
        
        
    }