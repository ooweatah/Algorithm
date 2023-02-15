#include <string>
#include <vector>
// n%x ==1 

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i =n;i>0;i--){
        if(n%i==1){
            answer = i; 
        }
    }
    return answer;
}