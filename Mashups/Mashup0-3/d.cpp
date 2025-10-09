#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, r, tmp1, tmp2;
    cin >> t >> r;
    vector<vector<int>> railway;
    while(r--){
        cin >> tmp1 >> tmp2;
        tmp1--; tmp2--;
        railway[tmp1].push_back(tmp2);
        railway[tmp2].push_back(tmp1);
    }
}