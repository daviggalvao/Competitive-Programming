#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, sum=0, limit=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    while(1){
        vector<int> aux;
        sort(v.begin(), v.end());
        for(int i=v.size()-1; i>=limit; i--) aux.push_back(v[i]);
        int s = aux.size(); 
        int cable = aux[s-1] + aux[s-2];
        sum += max(aux[s-1], aux[s-2]);
        aux.pop_back();
        aux.pop_back();
        aux.push_back(cable);
        v.push_back(cable);
        limit+=2;
        if(limit==v.size()-1) break;
    }
    cout << sum << '\n';
}