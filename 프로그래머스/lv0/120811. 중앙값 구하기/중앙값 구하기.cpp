#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(),array.end(),greater<int>());
    
    return answer = array[array.size()/2];
}