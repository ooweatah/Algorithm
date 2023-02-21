#include <vector>
#include <algorithm>
using namespace std;
// 12 13 14 23 24 34
// n개중에n/2개를 택하는 조합. 여기서 조합의 다양성이 가장 큰 값
// sort를 해서 size()/2 ~ size()의 갯수?
int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> v;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<nums.size();i++){
        if(find(v.begin(),v.end(),nums[i])==v.end()){
            v.push_back(nums[i]);
            answer++;
        }
    }
    if(answer>nums.size()/2) answer = nums.size()/2;
    return answer;
}