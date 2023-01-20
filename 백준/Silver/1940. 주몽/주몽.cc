#include<bits/stdc++.h> 
using namespace std; 

// 갑옷 + 두개의 재료 1부터 천만 M 
//첫째줄 : 재료의 개수 1부터 15000
// 둘째줄 : 갑옷 만들기 합
//셋쌔줄 : 갑옷재료 배열

int arr[10000004];
int n,m,cnt;
int main(){
	cin>>n;
	cin>>m;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	
	
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==m)
			cnt++;
		
		}
	}
	cout<<cnt;
} 