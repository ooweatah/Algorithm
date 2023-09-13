#include<bits/stdc++.h>
using namespace std;
// M x N , 연결 컴포넌트 , DFS

#define y1 aaaa
int m, n, k, x, y, a[104][104], visited[104][104], x1,y1, x2, y2;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

vector<int> ret;

int dfs(int y, int x) {
	visited[y][x] = 1;
	int ret = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= m || nx >= n || visited[ny][nx] == 1) continue;
		if (a[ny][nx] == 1) continue;
		ret += dfs(ny,nx);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> m >> n >> k;
	for(int i = 0 ; i < k ; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				a[y][x] = 1;
			}
		}
	}

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n; j++) {
			if(a[i][j] != 1 && visited[i][j] == 0){
				ret.push_back(dfs(i, j));
			}
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (int a = 0 ; a < ret.size(); a++) {
		cout << ret[a] << " ";
	}
	return 0;
}