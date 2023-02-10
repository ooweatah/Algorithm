#include <string>
#include <vector>

using namespace std;
// if 문으로 존재 n //  부존재 0
int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    int big = s2.size() > s1.size() ? s2.size() : s1.size(); 
    for (int i = 0;i<big;i++){
        if(s1.size()>s2.size()){
            for(int j=0;j<s2.size();j++){
               if(s1[i]==s2[j]){
                   answer ++;
               }
            }
        }
        else if(s2.size()>s1.size()){
            for(int j=0;j<s1.size();j++){
                if(s2[i]==s1[j]){
                    answer ++;
                }
            }
                
            }
        else if(s2.size()==s1.size()){
            for(int j=0;j<s1.size();j++){
                if(s2[i]==s1[j]){
                    answer ++;
                }
            }
        }
        
    }
        
    return answer;
}