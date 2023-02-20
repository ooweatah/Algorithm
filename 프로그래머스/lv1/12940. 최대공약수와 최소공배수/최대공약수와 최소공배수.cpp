#include <string>
#include <vector>
// 최소공배수 : lcd
using namespace std;
int gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    int gc = gcd(n,m);
    answer[0]= gc;
    answer[1] = n*m/gc;

    return answer;
}