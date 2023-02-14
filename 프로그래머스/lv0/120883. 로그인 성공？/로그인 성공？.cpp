#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string,string> member;
    string answer = "";
    for(auto info : db){
        member[info[0]]=info[1];
    }
if (member.find(id_pw[0]) == member.end()) {
    // 아이디가 없는 경우
    answer = "fail";
} else if (member[id_pw[0]] == id_pw[1]) {
    // 아이디와 비밀번호가 일치하는 경우
    answer = "login";
} else {
    // 아이디는 일치하지만 비밀번호가 일치하지 않는 경우
    answer = "wrong pw";
}
    return answer;
}