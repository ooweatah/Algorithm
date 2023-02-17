#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int num = 0;
    for(int i = 0 ;i<phone_number.size();i++){
        answer.push_back(phone_number[i]);
    }
    num = phone_number.size() - 4;
    answer.erase(0,num);
    answer.insert(0,num,'*');
    return answer;
}