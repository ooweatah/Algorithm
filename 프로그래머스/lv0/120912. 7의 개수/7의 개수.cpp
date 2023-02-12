#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i=0;i<array.size();i++){
        int t = i;
        while(array[t]){
            if(array[t]%10==7){
                answer++;
            }
            array[t] /= 10;
        }
    }
    return answer;
}