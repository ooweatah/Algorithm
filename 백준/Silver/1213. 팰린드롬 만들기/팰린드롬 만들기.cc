#include<bits/stdc++.h> 
using namespace std; 
string s, ret; 
int alpha[100], holnum; 
string hol,zzac;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for(char a : s)alpha[a]++;
	
	for(char i = 'A'; i <= 'Z'; i++){
		if(alpha[i]){
			if(alpha[i] % 2==1){
				holnum++;
				hol+=i;
			}
			if(holnum == 2)break;
			for(int j = 0; j < alpha[i]/2;j++){
				zzac+=i;
			}
		}
	}
	if(holnum == 2)cout << "I'm Sorry Hansoo\n";
	else
	{
	cout<<zzac;
	cout<<hol;
	reverse(zzac.begin(),zzac.end());
	cout<<zzac;
}
}