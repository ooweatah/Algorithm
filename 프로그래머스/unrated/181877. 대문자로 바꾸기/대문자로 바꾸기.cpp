#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0 ; i < myString.size();i++){
    if(myString[i] >= 'a' && myString[i] <= 'z' )myString[i] -= ('a' - 'A');
    answer.push_back(myString[i]);
    }
    return answer;
}