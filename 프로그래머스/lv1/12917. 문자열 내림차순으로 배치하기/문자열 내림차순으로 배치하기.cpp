#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) {



    return int(a) > int(b); 
}


string solution(string s) {
    if (s.size() < 1)
        return "";
    sort(s.begin(), s.end(), cmp);


    return s;
}