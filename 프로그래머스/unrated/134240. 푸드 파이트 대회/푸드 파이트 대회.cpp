#include <string>
#include <vector>
#include <algorithm>
// 홀수개일 경우 1개를 뺀다.
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    vector<int> v;
    vector<int> w;
    for(int i=1;i<food.size();i++){
        int num = 0;
        if(food[i]%2==1){
            num = (food[i]-1)/2;
            for(int j=1;j<=num;j++){
                v.push_back(i);
                w.push_back(i); // w는 우측
            }
            
        }
        else {
            num = food[i]/2;
            for(int j=1;j<=num;j++){
                v.push_back(i);
                w.push_back(i);
            }
        }
    }
    sort(w.begin(),w.end(),greater<int>());
    for(int a=0;a<v.size();a++){
        answer+=to_string(v[a]);
    }
    answer += "0";
    for(int b=0;b<w.size();b++){
        answer+=to_string(w[b]);
    }
    
    
    return answer;
}