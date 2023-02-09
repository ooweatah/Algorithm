#include <string>
#include <vector>
// 슬라이스 x 피자판수 > 사람수 , 피자판수 = 
using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int pizza = 0;
    while(slice*pizza<n){
        pizza += 1;
    }
    return pizza;
}
    