#include<bits/stdc++.h>
using namespace std;
int A,B,C,a,b,res,cnt[104];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    cin>>A>>B>>C;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        for(int j=a;j<b;j++){
            cnt[j]++;
        }
    }
    for(int j=1;j<100;j++){
    if(cnt[j]){
        if(cnt[j]==1) res+=A;
        else if (cnt[j]==2) res+=B*2;
        else if(cnt[j]==3) res+=C*3;
    }
    }
    cout<<res<<"\n";
    return 0;
}