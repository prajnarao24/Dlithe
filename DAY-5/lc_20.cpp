//valid paranthesis
#include <iostream>
#include<stack>
using namespace std;

bool isValid(string s){
stack<char> st;
for(int i=0;i<s.length();i++){
    char c=s[i];
    if(c=='('||c=='['||c=='{'){
        st.push(c);
    }
        else{
            if(st.empty()){
                return false;
            }
            if((c==')'&&st.top()=='(')||((c==']')&&st.top()=='[')||(c=='}'&&st.top()=='{')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }

return st.empty();
}

int main(){
    string s = "({()})";

    if(isValid(s)){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
    return 0;
}