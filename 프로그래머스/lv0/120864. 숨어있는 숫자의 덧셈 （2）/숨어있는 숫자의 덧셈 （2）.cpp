#include <string>
#include <vector>

using namespace std;
int solution(string my_string) {
    int answer = 0;
    int num = 0;
    int sum = 0;
    for(int i = 0;i<my_string.size();i++){
        if(my_string[i]>='0'&&my_string[i]<='9'){
            num = num*10 +( my_string[i] - '0');
        }
        else{
            if(num>0){
                sum = sum + num;
                num = 0;
            }
        }
        
    }
    if(num>0) sum = sum +num ;

    return sum;
}