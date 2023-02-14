#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int solution(int n) {
    for(int i=0;v.size()<=100;i++){
        string s=to_string(i);
        if(i%3!=0 && find(s.begin(),s.end(),'3')==s.end()){
            v.push_back(i);
        }
    }
    return v[n-1];
}
