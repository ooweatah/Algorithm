#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for(auto info : db){
        if(info[0] ==id_pw[0]&&info[1]==id_pw[1]){
            return "login";
        }
        else if(info[0]==id_pw[0]&&info[1]!=id_pw[1]){
            return "wrong pw";
        }

    }
    return "fail";
}