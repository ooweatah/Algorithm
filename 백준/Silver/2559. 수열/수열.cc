#include<bits/stdc++.h> 
using namespace std;   

int N,k,temp,psum[100004], ret = -1000004;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin>>N>> k;
	for(int i = 1; i<=N; i++){
		cin>>temp;psum[i]=psum[i-1]+temp;
	}
	for(int i=k;i<=N;i++){
		ret=max(ret,psum[i]-psum[i-k]);
		
	}
	cout<<ret<<"\n";
	return 0;
}