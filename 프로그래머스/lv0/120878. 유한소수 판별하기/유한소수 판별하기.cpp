#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){

    if (a%b == 0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}

int solution(int a, int b) {
    int gcd_num = 0;
    gcd_num = (a>b) ? gcd(a, b) : gcd(b, a);
    // 기약분수 만들기
    a /= gcd_num;
    b /= gcd_num;

    // 분모의 소인수 구하기
    while(true){
        if (b % 2 == 0){
            b /= 2;
        }
        else{
            break;
        }
    }

    while(true){
        if(b%5 == 0){
            b /= 5;
        }
        else{
            break;
        }
    }

    if (b == 1){
        return 1;
    }
    return 2;
}