#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, tmp;

    for(auto s : score){
        tmp.push_back(s);
        sort(tmp.begin(), tmp.end(), greater<int>());// 그때그때 sort를 한다.
        if(tmp.size() >= k) tmp.erase(tmp.begin() + k, tmp.end()); // k순위 밖은 삭제
        answer.push_back(tmp.back());
    }

    return answer;

}