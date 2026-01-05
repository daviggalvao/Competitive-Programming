#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int p, n, x, y;
    stack<int> st;
    cin >> p >> n; 
    while(n--){
        cin >> x >> y;
        if(x==1) st.push(y);
        if(x==2){
            for(int i=0; i<y; i++){
                if(!st.empty()) st.pop();
                else break;
            }
        }
    }
    while(!st.empty()){
        int t = st.top();
        st.pop();
        p += t;
    }
    cout << p;
}