#include <bits/stdc++.h>
using namespace std;

int main(void){
    char c; int x, t, max=-1;
    stack<int> st, tmp;
    cin >> t;
    while(t--){
        cin >> c >> x;
        if(c=='A'){
            st.push(x);
            if(x>max) max = x;
        }
        if(c=='V') st.empty()? cout << "0\n" : cout << max << '\n';
        if(c=='R'){
            if(!st.empty()){
                int aux = st.top();
                if(aux==max){
                    st.pop();
                    if(!st.empty()) max = st.top();
                    while(!st.empty()){
                        int aux = st.top();
                        st.pop();
                        if(aux>max) max = aux;
                        tmp.push(aux);
                    }
                    while(!tmp.empty()){
                        int aux = tmp.top();
                        tmp.pop();
                        st.push(aux);
                    }
                }
                else st.pop();
            }
        }
    }
}
