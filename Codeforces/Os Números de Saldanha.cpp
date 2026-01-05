#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> x;
    int tmp;
    for(int i=0; i<4; i++){
        cin >> tmp;
        x.push_back(tmp);
    }
    sort(x.begin(), x.end());
    cout << x[3]-x[0] << ' ' << x[3]-x[1] << ' ' << x[3]-x[2];
}