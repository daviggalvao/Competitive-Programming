#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    stack<char> st;
    cin >> s;
    for(int i=0, l=s.length(); i<l; i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            (s[i]==st.top())? st.pop() : st.push(s[i]);
        }
    }
    st.empty()? cout << "sim" : cout << "nao";
}