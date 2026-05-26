#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, tmp, sum=0;
    cin >> n;
    unordered_map<int, int> hm;
    while(n--){
        cin >> tmp;
        hm[tmp] += 1;
    }
    for(auto i: hm){
        sum += i.second/2;
    }
    cout << sum;
}