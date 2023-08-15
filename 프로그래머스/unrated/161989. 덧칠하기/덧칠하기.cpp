#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    while(!section.empty())
    {
        int max = 0;
        int idx = 0;
        for(int a = 0; a < section.size(); a++)
        {
            if(section[a] <= section[0] + m - 1)
                idx = a;
            else{
                idx = a - 1;
                break;
            }

        }
        for(int i = 0; i < idx + 1; i++)
        {
            section.erase(section.begin() + 0);
        }
        answer ++;

    }


    return answer;
}