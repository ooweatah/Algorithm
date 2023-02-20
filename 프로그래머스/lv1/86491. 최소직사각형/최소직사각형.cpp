#include <string>
#include <vector>
#include <algorithm>
// 가로,세로의 길이중에 가장 긴것 + 두번째로 가장 긴 것
using namespace std;

int solution(vector<vector<int>> sizes) { // {(가로,세로),(가로,세로)}
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    vector<int> w;
    vector<int> h;
    for(int i=0;i<sizes.size();i++){
        for(int j=0;j<sizes[0].size();j++){
            if(sizes[i][0]>=sizes[i][1]){
                w.push_back(sizes[i][0]); // 큰값은 w
                h.push_back(sizes[i][1]); // 작은값은 h
            }
            else if(sizes[i][1]>sizes[i][0]){
                w.push_back(sizes[i][1]);
                h.push_back(sizes[i][0]);
            }
        }
    }
    sort(w.begin(),w.end(),greater<int>());
    sort(h.rbegin(),h.rend());
    return answer = w[0]*h[0];
}