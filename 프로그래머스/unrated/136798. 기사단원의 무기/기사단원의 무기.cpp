#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> num(number,0);
    for(int i =1;i<=number;i++){
        int str = 0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                str++;
                if(j*j<i){
                    str++;
                }
                
            }
        }
        if(str>limit){
        answer+=power;
            continue;
            
        }
        else {
            answer+=str;
        }
    }
    return answer;
}