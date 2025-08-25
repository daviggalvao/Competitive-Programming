#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    long long int a, count = 0;
    cin >> a;
    for(int i=1; i<n; i++){
        long long int tmp = a;
        cin >> a;
        long long dif = a - tmp;
        if(dif<0){
            count -= dif;
            a -= dif;
        }
    }
    cout << count << endl;
}       