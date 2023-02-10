#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
// if 
int solution(string my_string) {
    int answer = 0;
    int sum = 0;
    for(int i =0;i<my_string.size();i++){
        if(my_string[i]>'0'&&my_string[i]<='9'){
            answer += my_string[i] - '0';
        }
    }
    
    return answer;
}