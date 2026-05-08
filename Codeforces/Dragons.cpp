#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int s, n, str, bonus;
    cin >> s >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    for(int i=0; i<n; i++){
        cin >> str >> bonus;
        pq.push({str, bonus});
    }
    while(!pq.empty()){
        pair<int, int> p = pq.top();
        if(s>p.first){
            s += p.second;
            pq.pop();
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}