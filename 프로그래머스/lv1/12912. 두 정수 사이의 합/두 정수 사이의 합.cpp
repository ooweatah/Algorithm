#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = 0;
    if(a==b){
        return answer = a;
    }
    else if(a>b){
        for(int i=b;i<=a;i++){
            sum += i;
        
        }
        return answer =sum;
    }
    else if(b>a){
        for(int i=a;i<=b;i++){
        sum += i;
        
    }
        return answer = sum;
}
}