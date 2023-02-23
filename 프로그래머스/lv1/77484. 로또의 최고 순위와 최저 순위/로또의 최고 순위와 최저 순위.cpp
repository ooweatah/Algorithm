#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int count_zero = 0;
    for(int i = 0; i < lottos.size(); i++) {
        for(int j = 0; j < win_nums.size(); j++) {
            if(win_nums[j] == lottos[i]) {
                count++;
                break;
            }
            else if(lottos[i] == 0) {
                count_zero++;
                break;
            }
        }
    }
    int max_rank = min(7 - count - count_zero, 6);
    int min_rank = min(7 - count, 6);
    answer.push_back(max_rank);
    answer.push_back(min_rank);
    return answer;
}