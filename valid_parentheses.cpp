#include<bits/stdc++.h>
using namespace std;

class valid_parentheses {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')){
                        return false;
                    }
            st.pop();
            }
        }
        return st.empty();
        
    }
};

int main(){
    valid_parentheses va;
    string s;
    cin>>s;
    if(va.isValid(s)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
    return 0;
}