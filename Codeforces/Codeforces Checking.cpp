#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; 
    char c;
    string cf = "codeforces";
    cin >> t;
    while(t--){
        cin >> c;
        (find(cf.begin(), cf.end(), c) != cf.end())? cout << "Yes\n" : cout << "No\n";
    }
}