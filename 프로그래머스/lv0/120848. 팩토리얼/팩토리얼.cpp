#include <string>
#include <vector>


using namespace std;
int factorial(int a){
    if(a == 1 || a== 0) return 1;
    return a*factorial(a-1);

}

int solution(int n) {
    int answer = 0;
    int i = 0 ;
    for(int i=1;i<=10;i++){
      if(n==factorial(i)){
          answer = i;
      }
        else if(n<factorial(i)){
            if(n>factorial(i-1))
                answer = i-1;
        }
        
    }
        
        
    
    return answer;
}