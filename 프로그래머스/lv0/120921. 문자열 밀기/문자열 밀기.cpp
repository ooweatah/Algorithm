#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {

    for (int i = 0; i< A.size(); i++) {
        if (A == B) {
            return i;
        }
        char last = A.back();
        A.pop_back();
        A = last + A; // last + 나머지
    }

    return -1;
}