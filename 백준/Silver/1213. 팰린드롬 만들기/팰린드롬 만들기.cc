#include<bits/stdc++.h> 
using namespace std; 
string s, ret; 
int alpha[100], holnum; 
char mid;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for(char a : s)alpha[a]++;
	for(char i = 'Z'; i >= 'A'; i--){
		if(alpha[i]){
			if(alpha[i] % 2==1){
				mid = char(i);holnum++;
				alpha[i]--;
			}
			if(holnum == 2)break;
			for(int j = 0; j < alpha[i]; j += 2){
				ret = char(i) + ret; 
				ret += char(i);
			}
		}
	}
	if(mid)ret.insert(ret.begin()+ ret.size() / 2, mid);
	if(holnum == 2)cout << "I'm Sorry Hansoo\n";
	else cout << ret << "\n"; 
}