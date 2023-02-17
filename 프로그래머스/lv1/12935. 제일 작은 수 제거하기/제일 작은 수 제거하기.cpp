#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }

    for(int i = 0;i<arr.size();i++){
        if(i==min) continue;
        answer.push_back(arr[i]);
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}