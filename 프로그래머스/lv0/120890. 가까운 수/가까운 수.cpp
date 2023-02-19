#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int diff = 100;

    sort(array.begin(),array.end());
    for(const auto v : array)
    {
        if(diff > abs(v-n))
        {
            diff = abs(v-n);
            answer = v;
        }
    }
    return answer;
}