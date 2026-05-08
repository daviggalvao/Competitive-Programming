#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, min=0, qtd=0;
    cin >> n;
    while(n--){
        int sai, entra;
        cin >> sai >> entra;
        qtd -= sai;
        qtd += entra;
        if(qtd>min) min = qtd;
    }
    cout << min << endl;
}