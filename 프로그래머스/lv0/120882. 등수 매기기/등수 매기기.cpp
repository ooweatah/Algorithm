#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;
    for(auto v :score){
        avg.push_back(((double)v[1]+v[0])/2);
    }
    for(auto a : avg){
        int cnt = 1;
        for(auto b : avg){
            if(b>a){
                cnt+=1;
            }
        }
        answer.push_back(cnt);
    }
    return answer;
}