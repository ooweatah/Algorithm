#include <string>
#include <vector>

using namespace std;
// 빈병 a개를 주면 마트가 주는 콜라 병수 b , 상빈이가 들고있는 빈병 n개
int solution(int a, int b, int n) {
    int answer = 0;
    int count; // n을 빈병a개당 몫(받는 콜라수)
    while(n>=a){ // 상빈이가 가진 빈병수가 최소병수보다 많을 경우
        count = 0; // count 초기화
        count = (n/a)*b ; //20병에서 3병을 나눈다. 18병. 2병 남음, 마트에서 몫만큼 돌려받는다.
        answer += count; // 6병을 받았다.
        n=n%a; // 20병에서 3을 나눈 나머지 . 6병돌려받고 2병이 남은 상황
        n = count+ n; // 몫 6병 + 남아있는 2병 = 8병
        if(n<2) break;
        }

    return answer;
}