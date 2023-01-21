#include<bits/stdc++.h> 
using namespace std; 
// 첫째줄 단어의수 N개
// N개에는 A랑 B만 이루어진 단어 길어 2~ 100000 모든 단어의 길이 합 10000000 넘지말기

int n, ret;
char k;
string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		stack<char> stk;
		for(char a : s){ //ABBABBAA
			if(stk.size()&&stk.top()==a)
			{
				stk.pop();
			}
			else {
			stk.push(a);
			}
		}
		if(stk.size()==0)ret++;
	}
	cout<<ret<<"\n";
}
	
	

	