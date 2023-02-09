#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;
int dp[501][501];
int main(void){
	int N, r[501], c[501];
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d %d", &r[i], &c[i]);
	}
	for(int i=0; i<N; i++){
		dp[i][i] = 0;
	}
	for(int b=1; b<N; b++){
		for(int i=0; i<N-b; i++){
			int j= i+b;
			dp[i][j] =INT_MAX;
			for(int k=i; k<j; k++)
				dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+r[i]*r[k+1]*c[j]);
			//printf("%d %d : %d\n",i,j,dp[i][j]);
		}
	}
	printf("%d", dp[0][N-1]);
}