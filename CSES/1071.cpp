#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        long l,c;
        cin >>  l >> c;
        // linha par = dec ate a diagonal
        // linha imp = cre ate a diagonal
        // coluna par = dec pra cima
        // coluna imp = cre pra cima
        int a = 1;
        int n=max(l,c);
        for(int i=1; i<n; i++){
            a += 2*i;
        }
        if(l<n){

        }
        if(l>n){

        }
        if(c<n){

        }
        if(c>n){

        }
        cout << a << endl;
    }
}       