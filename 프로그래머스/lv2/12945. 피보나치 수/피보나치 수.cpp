#include <string>
#include <vector>
// 재귀함수 시간초과?
using namespace std;
/*int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return (fibo(n-1) + fibo(n-2))%1234567;
}*/
int solution(int n) {
    int answer = 0;
    int fibo[100001];
    fibo[0] = 0; fibo[1] = 1;
    for(int i =2;i<=n;i++){
        fibo[i] = (fibo[i-1] + fibo[i-2])%1234567;
    }
    return answer = fibo[n];
}