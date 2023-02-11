#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int order) {
    int answer = 0;
    int clap = 0;
    string s = to_string(order);
    for(int i =0;i<=s.size();i++){
        switch(s[i]){
            case '3':
            case '6':
            case '9': answer ++;
        }
            
    }
    
    return answer;
}