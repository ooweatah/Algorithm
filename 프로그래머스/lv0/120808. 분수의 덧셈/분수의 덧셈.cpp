#include <string>
#include <vector>

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int top = (denom1 * numer2) + ( denom2 * numer1);
    int bottom = (denom1*denom2);
    answer.push_back(top);
    answer.push_back(bottom);
    int g = gcd(answer[0],answer[1]);
    answer[0] /= g;
    answer[1] /= g;
    
    return answer;
}