#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        long long x,y;
        cin >> x >> y;
        x-y>1 ? cout << "Yes\n" : cout << "No\n";
    }
}