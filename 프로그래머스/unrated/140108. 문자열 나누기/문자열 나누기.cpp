#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    int i,j;
    for(i=0;i<s.size();i++){
        int count = 0;
        int count2 = 0;
        for(j=i;j<s.size();j++){
            if(s[j]==s[i]) count++;
            else count2++;
            if(count==count2) break;
            
        }
        i = j;
        answer++;
        

    }
    return answer;
}