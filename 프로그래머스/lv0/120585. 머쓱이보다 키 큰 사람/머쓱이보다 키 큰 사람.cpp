#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    int count = 0;
    for (int i = 0;i<array.size();i++){
        if(array[i]>height){
            count ++;
        }
    }
    return count;
}