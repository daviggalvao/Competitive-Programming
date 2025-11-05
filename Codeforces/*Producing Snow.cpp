#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<int> pile(n), psumTmp(n), delta(n);
    vector<int> temperaturas(n);
    vector<vector<pair<int, int>>> dead(n);

    for(int i=0; i<n; i++) cin >> pile[i];
    for(int i=0; i<n; i++){
        cin >> tmp;
        temperaturas[i] = tmp;
        i? psumTmp[i] = tmp + psumTmp[i-1] : psumTmp[i] = tmp;
    }
    for(int i=0; i<n; i++){
        int prev;
        !i? prev = 0 : prev = psumTmp[i-1];
        auto p = upper_bound(psumTmp.begin(), psumTmp.end(), pile[i]+prev);
        int pos = p - psumTmp.begin();
        if(p != psumTmp.end()){
            dead[pos].push_back(make_pair(pile[i],pos));
        }
    }
    int contador=0;
    for(int i=0;i<n;i++){
        if(dead[i].size() == 0){
            contador++;
            cout << contador*temperaturas[i];
        }else{
            contador -= dead[i].size();
            int somaTotal=0;
            for(auto pair : dead[i]){
                int valor = pair.first;
                int dia = pair.second;
                int resto = valor - psumTmp[dia-1];
                somaTotal += resto;
            }
            cout << "aqui";
            cout << (contador*temperaturas[i])+somaTotal;
        }
    }
}