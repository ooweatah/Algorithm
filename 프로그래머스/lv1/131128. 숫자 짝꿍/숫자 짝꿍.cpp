#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    while((X.empty() == 0) && (Y.empty() == 0)){
        if(X.back() == Y.back()){
            answer.push_back(X.back());
            X.pop_back();
            Y.pop_back();
        } else if (X.back() > Y.back()){
            X.pop_back();
        } else {
            Y.pop_back();
        }
    }
    if (answer.empty()) {
        return "-1";
    }
    while(answer[0] == '0'){
        answer.erase(0, 1);
    }
    if (answer.empty()) {
        return "0";
    } 
    return answer;
}