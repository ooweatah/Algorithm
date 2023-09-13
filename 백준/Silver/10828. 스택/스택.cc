#include<bits/stdc++.h>
 
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    stack<int> st; 
    string str;
 
    for(int i=0; i<n; i++) {
        cin >> str;
 
        if (str == "push") { //push 명령어 일때. 
 
            int num;
            cin >> num;
            st.push(num);
 
        } else if (str == "pop") {    //pop 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "-1" << endl;
            }
 
        } else if (str == "size") {  
 
            cout << st.size() << endl;
 
        } else if (str == "empty") { 
 
            if (st.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
 
        } else if (str == "top") { 
 
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
 
        }
 
    }
    return 0;
}
