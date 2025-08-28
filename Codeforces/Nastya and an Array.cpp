#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, tmp;
    set<int> a;
    cin >> n;
    while(n--){
        cin >> tmp;
        a.insert(tmp);
    }
    a.find(0) != a.end() ? cout << a.size()-1 : cout << a.size();
}