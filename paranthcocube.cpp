//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    int i, n;
    stack<char> st;

    cin >> input;

    n = input.length();

    for(i=0; i<n; ++i){
        if(input[i] == '('){
            st.push(input[i]);
        }
        else{
            if(st.empty()){
                cout << "No"; return 0;
            }

            st.pop();
        }
    }

    if(st.empty())
        cout << "Yes";
    else
        cout << "No";

}
