#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num =0;
    for(int i =0;i<s.size();i++){
        if(s[i]==' '){
            num = 0;
            continue;
        }
        else if(num%2==1){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i] = s[i]+ 'a' -'A';
            }
        }
        else
            if(s[i]>='a'&&s[i]<='z'){
                s[i] = s[i] - 'a' + 'A';
            }
        num++;
    }
    return s;
}