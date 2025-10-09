#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    string tmp;..
    cin >> n >> m;
    vector<string> station;
    set<string> exp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        station.push_back(tmp);
    }
    for(int i=0; i<m; i++){
        cin >> tmp;
        exp.insert(tmp);
    }
    for(string i : station) exp.count(i)? cout << "Yes\n" : cout << "No\n";
}