#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, a, leader=0;
    cin >> n >> k;
    vector<int> kid(n);
    for(int i=0; i<n; i++) kid[i] = i+1;
    for(int i=0; i<k; i++){
        cin >> a;
        int index = (leader+a)%kid.size();
        cout << kid[index] << ' ';
        kid.erase(index + kid.begin());
        leader = index;
    }
}