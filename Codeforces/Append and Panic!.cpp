#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int n = s.size()-2;
    for(int i=n; i>=0; i--){
        if(s[i]>=s[i+1]){
            cout << i+1 << endl;
            return 0;
        }
    }

}   
