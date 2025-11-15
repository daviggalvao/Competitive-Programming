#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, count=0;
        cin >> n;
        stack<char> st;
        string s;
        cin >> s;
        for(int i=0, l=s.size(); i<l; i++){
            if(s[i]=='(') st.push(s[i]);
            if(s[i]==')'){
                if(st.size()){
                    st.pop();
                    count++;
                }
            }
        }
        cout << (n-2*count)/2 << '\n';
    }
}