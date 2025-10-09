#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, m, tmp, timeBack=0, idx=0, max=0;
    cin >> n >> m;
    vector<int> cashier(n), timeTotal(n);
    vector<bool> free(n);
    queue<int> client;
    for(int i=0; i<n; i++){
        cin >> cashier[i];
        timeTotal[i] = 0;
        free[i] = true;
    }
    for(int i=0; i<m; i++){
        cin >> tmp;
        client.push(tmp);
    }
    while(idx<m){
        for(int i=0; i<n; i++){
            if(free[i]){
                int tmp = client.front();
                client.pop();
                if(timeBack<tmp*cashier[i]) change(free, n);
                timeBack = tmp*cashier[i];
                timeTotal[i] += timeBack;
                if(timeTotal[i]>max) max = timeTotal[i];
                free[i].flip();
                idx++;
                break;
            }
        }
    }
    cout << max;
}