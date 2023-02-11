#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string pl = to_string(age);
    for(int i = 0 ;i<pl.size();i++){
        answer += (pl[i]+49);
    }
    return answer;
}