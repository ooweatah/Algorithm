#include <bits/stdc++.h> 
using namespace std;

//13 글자 밀기 ==> 아스키코드 +13하기 알파벳 대문자 / 소문자 
// 알파벳이 아니면 그냥 두기 if문 ( 초과시 A부터 시작)
// a= 97 A=64
string s;
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>=65&& s[i]<=90){
			if(s[i] +13 >90) s[i]= s[i] +13 -26;
			else s[i] = s[i] +13 ;
		}else if(s[i]>=97&&s[i]<=122){
			if(s[i] +13 >122) s[i]=s[i] + 13 - 26;
			else s[i] = s[i] +13;		
			}
			cout<<s[i];
	}
	return 0;
}