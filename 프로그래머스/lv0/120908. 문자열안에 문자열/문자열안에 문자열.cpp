#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for(int i = 0;i<str1.size();i++){
        if(str1.substr(i,str2.size())==str2){
           return 1;
        }
    }
    return 2;
}
          