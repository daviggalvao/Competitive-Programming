#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, tmp, sum=0;
        cin >> n;
        while(n--){
            cin >> tmp;
            sum += tmp;
        }
        sum%2==0 ? cout << "yes\n" : cout << "no\n";
    }
}