#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer= {0,0};
    for(const auto& v : keyinput)
    {
        if(v == "left")
        {
            if(answer[0] > -board[0]/2)
            {
                answer[0]--;
            }
        }
        if(v == "right")
        {
            if(answer[0] < board[0]/2)
            {
                answer[0]++;
            }
        }
        if(v == "down")
        {
            if(answer[1] > -board[1]/2)
            {
                answer[1]--;
            }
        }
        if(v == "up")
        {
            if(answer[1] < board[1]/2)
            {
                answer[1]++;
            }
        }
    }
    return answer;
}
