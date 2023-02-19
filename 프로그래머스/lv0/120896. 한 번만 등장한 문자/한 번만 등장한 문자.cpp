#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    for(auto i: s){
        int cnt = 0;
        for(auto j: s)
            if(i == j)
                cnt++;
        if(cnt == 1)
            answer.push_back(i);
    }
    sort(answer.begin(),answer.end());


    return answer;
}