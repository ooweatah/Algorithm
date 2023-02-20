#include <string>
#include <vector>

using namespace std;
// 5C3을 해서 뽑은 3개의 합이 0인 경우의 수.
int solution(vector<int> number) {
    int answer = 0;
    for(int i =0;i<=number.size();i++){
        for(int j=i+1;j<number.size();j++){
            for(int k=j+1;k<number.size();k++){
                if(number[i]+number[j]+number[k]==0){
                    answer++;
                }
            }
        }
    }
    return answer;
}