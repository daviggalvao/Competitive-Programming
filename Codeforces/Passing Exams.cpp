#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x[3], count=0;
        for(int i=0; i<3; i++){
            cin >> x[i];
            if(x[i]>=50) count++;
        }
        count>1? cout << "Yes\n" : cout << "No\n";
    }
}