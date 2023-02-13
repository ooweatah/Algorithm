#include <string>
#include <vector>

// 머씩이 들고있는거 balls 나눠줄거 share balls의 구슬중 share을 고르는 경우의 수
// 조합?

using namespace std;
__int128 factorial(int a){
    if(a==1||a==0) return 1;
    return a*factorial(a-1);
}
int solution(int balls, int share) {
    int answer = 0;
    answer = factorial(balls) / (factorial(balls - share) * factorial(share));
    
    return answer;
}