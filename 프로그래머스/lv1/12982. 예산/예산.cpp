#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
// sort 함수로 예산 낮은 부서부터
// 예산에서 부서만큼 빼고 남은 수가 다음 요소보다 클 경우 진행 , 아니면 break
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    vector<int> v;
    for(auto a : d){
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(budget>=v[i]){
            answer++;
            budget -= v[i];
        }
    }
    return answer;
}