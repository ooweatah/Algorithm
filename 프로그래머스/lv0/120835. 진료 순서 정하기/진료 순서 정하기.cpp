
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;

    for(int i=0;i<emergency.size();i++)
    {
        int count = 0;
        for(int j=0;j<emergency.size();j++)
        {
            if(emergency[j] > emergency[i]){
            count += 1;
                }
        }
        answer.emplace_back(count+1);
    }

    return answer;
}