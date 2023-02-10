#include <string>
#include <vector>
#include <algorithm>
//가위 2 바위 0 보 5
// 0 >> 2 // 5 >> 0 // 2 >> 5 025025
using namespace std;

string solution(string rsp) {
    string answer = "";
    for(int i =0;i<=rsp.size();i++){
        if(rsp[i]=='0'){
            answer.push_back('5');
        }
        else if(rsp[i]=='2'){
            answer += '0';
        }
        else if(rsp[i]=='5'){
            answer += '2';
        }

    }
    return answer;
}