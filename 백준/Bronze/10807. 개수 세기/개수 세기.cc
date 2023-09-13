#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[104];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == m) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}