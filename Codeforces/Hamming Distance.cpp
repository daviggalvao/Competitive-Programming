#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, a=0;
    string s, t;
    cin >> n >> s >> t;
    for(int i=0; i<n; i++){
        if(s[i]!=t[i]) a++;
    }
    cout << a;
}