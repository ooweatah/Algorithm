#include<bits/stdc++.h>
using namespace std;

int N;
int main(){
	cin>>N;
    for(int i=0;i<N;i++){
    	for(int j=N;j-1>i;j--){
    		cout<<" ";
    	}
    		
	
		for(int k = 1; k<i+2;k++){
			cout<<"*";
			
		}
		cout<<"\n";
	}
		

}