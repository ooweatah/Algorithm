#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int maxCnt=0;
    map<int, int> cnt;

    for(auto a: array){
        cnt[a]++;
        if(maxCnt<cnt[a]) maxCnt=cnt[a];
    }

    int i=0;
    for(auto a: cnt){
        if(a.second==maxCnt){
            answer = a.first;
            i++;
        }
    }

    if(i>1) answer=-1;

    return answer;
}
