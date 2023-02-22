#include <vector>
#include <iostream>
using namespace std;
// 3개의 수를 더했을 때 소수가 되는 경우
bool sosu(int a){
    int b = 0;
    for(int s=1;s<=a;s++){
        if(a%s==0){
            b++;
        }
        
    }
    if(b==2) return true;
    else return false;
}
int solution(vector<int> nums) {
    int answer = 0;
    int a;
    for(int i =0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(sosu(nums[i]+nums[j]+nums[k])){
                    answer++;
                }
            }
        }
        
    }


    return answer;
}