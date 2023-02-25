#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    // babbling 벡터를 순회하며 각 문자열을 처리합니다.
    for(int i;i<babbling.size();i++)
    {
        string temp1="";
        string temp2="";
        // 문자열을 한 글자씩 읽어가면서 처리합니다.
        for(char c:babbling[i])
        {
            temp1+=c; // temp1에 글자를 추가합니다.
            // 만약 temp1이 "aya", "ye", "woo", "ma" 중 하나와 일치하는 경우
            if(temp1 == "aya"||temp1 == "ye"||temp1 == "woo"||temp1 == "ma")
            {
                // temp2와 일치하는 경우 (즉, 같은 패턴이 연속해서 등장한 경우) 더 이상 처리하지 않습니다.
                if(temp2 == temp1) break;
                temp2=temp1; // temp2에 현재 패턴을 저장합니다.
                temp1=""; // temp1을 초기화합니다.
            }
        }
        // 모든 글자를 처리한 후, temp1이 비어있는 경우에만 answer를 증가시킵니다.
        if(temp1.size()==0) answer++;
    }
    return answer;
}