#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n, tmp;
    cin >> n;
    set<int> s;
    while(n--){
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size();
}