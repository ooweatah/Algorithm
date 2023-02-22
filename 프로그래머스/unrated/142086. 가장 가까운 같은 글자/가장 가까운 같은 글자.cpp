#include <string>
#include <vector>
#include <unordered_map>
// unordered_map을 사용하는 경우 : 값을 계속 갱신해야 할 때
// 중복이 허용된 상황

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> umap; //
    for(int i =0;i<s.size();i++){ // size만큼
       if(umap.find(s[i])!=umap.end()){ //
           //찾으면
           int idx = umap[s[i]]; // idx = umap의 value
           answer.push_back(i-idx); // i에서의 알파벳에서 idx만큼빼서 거리를 구한다.
           umap[s[i]] = i; // key : value 설정.
           // 3대입(a), 중복, idx=umap[a]에 해당하는 녀석을 찾아. 거기서 3 - 1 해줘.
           // umap[a] = 3 ( 1>>3으로 이동)
       }
        else{
           umap[s[i]]=i;
           answer.push_back(-1);
       }
    }
    return answer;
}
