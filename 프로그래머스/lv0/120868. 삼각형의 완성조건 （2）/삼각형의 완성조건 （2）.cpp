#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int s1 = sides[0];
    int s2 = sides[1];
    int lst = s1 + s2;

    for(int i = 1; i < lst; i++) {
        if(s1 + s2 > i && s1 + i > s2 && s2 + i > s1) answer++;
    }

    return answer;
}