#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = 0;
    int idx = 0;
    for(int i =0;i<array.size();i++){
        if(max<array[i]){
            max = array[i];
            idx = i;
        }
    }
    answer = {max,idx};
    return answer;
}