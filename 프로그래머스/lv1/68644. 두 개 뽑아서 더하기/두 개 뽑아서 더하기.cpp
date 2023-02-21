#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//배열중에 2개를 뽑아서 더하는 조합으로 간다?
// 같은 수가 없으면 뽑는다 or 모두 뽑고 오름차순 후 지운다.
//string npos사용불가, find가 못찾을 경우?
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0;i<numbers.size();i++){
        for(int j=i+1;j<numbers.size();j++){
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}