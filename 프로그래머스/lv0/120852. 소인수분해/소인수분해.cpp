#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int t = 2;
    while(n!=1)
    {
        if(n%t==0){
            n = n/t;
            answer.push_back(t);
        }
        else t++;

    }
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}
