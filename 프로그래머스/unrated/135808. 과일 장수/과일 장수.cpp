#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
// 1점~k점 1상자당 m개 포장,, (가장 낮은점수 X 사과의 개수 (상자당 가격)=p*m)
// 만약 배열사이즈%m이 나눠떨어지지 않는 경우 나머지는 버린다.
// 최솟값을 정하는 알고리즘 
using namespace std;

int solution(int k, int m, vector<int> score) {// k:최대사과점수 , m:사과의 수, score: 사과들의 점수
    int answer = 0;
    sort(score.begin(),score.end(),greater<int>()); // 뒤에 최소값은 날림
    int n = score.size()%m;
    if(score.size()>=m){
    for(int i=0;i<score.size()-n;i+=m){ // m개씩 나눠서 진행하도록
        int group_min1 = score[i];
        for(int j=i;j<i+m&&j<score.size();j++){ // i부터 i+m만큼 , i+m부터 i+m+m 
            group_min1 = min(group_min1,score[j]);
        }
        answer += (group_min1*m);
    
    }
    }
    else return 0;
    return answer;
}