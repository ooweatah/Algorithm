#include<bits/stdc++.h> 
using namespace std;

// 첫째줄 : 종류의 가지수
// 다음 n개에는 의상의 종류가 구분 됨
// 문자열은 1이상 20이하의 알파벳 소문자
int tn,cn;
string s1,s2;

int main(){
	cin>>tn;
	while(tn--){
	map<string, int> mp;
	cin>>cn;
	for(int i=0;i<cn;i++){
		cin>>s1>>s2;
		mp[s2]++;
	}
	long long ret = 1;
	for(auto c : mp){
		ret *=((long long )c.second +1);
	}
	ret--;
	cout<< ret <<"\n";
}
return 0;
}
