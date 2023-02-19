using namespace std;
//얼마가 모자라는지 구하는 문제. price: n배씩 늘어난다.  price * count - money 
long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum = 0;
    long long add = 0;
    while(count){
         add = price*count;
         sum += add;
        count--;
    }
    if(money>sum) return 0;
    answer = sum - money;

    return answer;
}