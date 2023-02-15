#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int alp = 0;
    int aly = 0;
    for(int i =0;i<s.size();i++){
        if(s[i]=='p'||s[i]=='P'){
            alp++;
        }
        else if(s[i]=='y'||s[i]=='Y') aly++;
    }
    if(alp==aly) return answer ;
    else return false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}