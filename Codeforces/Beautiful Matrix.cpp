#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int m;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m;
            if(m){
                cout << abs(i-2) + abs(j-2);
                return 0;
            }
        }
    }
}