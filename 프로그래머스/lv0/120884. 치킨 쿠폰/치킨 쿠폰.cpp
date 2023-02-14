#include <string>
#include <vector>

using namespace std;

int solution(int coupon) {
    int answer = 0;
    while(coupon >= 10)
    {
        answer += coupon / 10;
        coupon = coupon / 10 + coupon % 10;
    }

    return answer;
}
