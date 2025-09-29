#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,v; 
    cin >> n >> k >> v;
    vector<int> vec(n);
    int index=n-k, vol=v/k;
    for(int i=0; i<n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    vec[index]*k<=vol? cout << vec[index] : cout << vol;
}