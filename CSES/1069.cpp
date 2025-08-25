#include <bits/stdc++.h>
using namespace std;

int main(void){
    int max = 1, count = 1;
    string s;
    cin >> s;
    for(int i=1, n=s.length(); i<=n; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count>max) max = count;
    }
    cout << max << endl;
}       