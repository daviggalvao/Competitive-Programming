#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);  
    long long n, sum=0, janelasCompletas, espacosRestantes;
    cin >> n;
    for(int i=0, l=log(n)/log(2); i<=l; i++){
        janelasCompletas = floor((n+1)/(long long) pow(2, i+1));
        espacosRestantes = (n+1) - janelasCompletas * (long long) pow(2, i+1);
        long long zeros = (espacosRestantes - (long long) pow(2, i));
        if(zeros>0) sum += zeros;
        sum += (janelasCompletas * (long long) pow(2, i));
    }
    cout << sum;
}