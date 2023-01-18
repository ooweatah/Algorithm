#include <bits/stdc++.h> 
using namespace std;

//소문자로만 앞으로 / 뒤로 같음
string s, rev;


int main(){
	cin>>s;
	rev = s;
	reverse(rev.begin(),rev.end());
	if(rev==s) cout<<1<<"\n";
	else cout<<0<<"\n";
	
	return 0;
}