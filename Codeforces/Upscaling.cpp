#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            for(int k=0; k<2; k++){
                for(int j=0; j<n; j++){
                    ((i+j)%2==0)? cout << "##" : cout << "..";
                }
                cout << '\n';
            }
        }
    }
}