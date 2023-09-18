#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

int solution(string myString, string pat) {
    boost::algorithm::to_lower(myString);
    boost::algorithm::to_lower(pat);
    
    int count = 0;
    
    if (myString.size() < pat.size()){
        return 0;
    }
    
    for (int i=0; i<myString.size()-pat.size()+1; i++){
        count = 0;
        for (int j=0; j<pat.size(); j++){
            if (myString[i+j] == pat[j]){
                count++;
                if (count == pat.size()){
                    return 1;
                }
            }
        }
    }
    
    return 0;
}