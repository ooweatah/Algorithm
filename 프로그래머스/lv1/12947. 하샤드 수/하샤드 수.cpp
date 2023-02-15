#include <string>
#include <vector>
// 자릿수의 합으로 나눠떨어지면 된다.
// string으로 변환 후 더하고 나눠본다. 
using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum =0;
    string s = to_string(x);
    for(int i = 0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            sum += (s[i] - '0');
        }
    }
    if(x%sum==0) return answer;
    else return false;
}