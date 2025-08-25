#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,c;
    cin >> n >> c;
    int eq = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(tmp==3) eq++;
        else sum+=tmp;
    }

    if(sum%3==1) sum--;
    if(sum%3==2) sum-=2;

    while(1){
        if(sum>0){
            sum-=3;
            eq++;
        }
        else break;
    }
    while(1){
        if(eq*3<=c){
            cout << eq << endl;
            return 0;
        }
        else eq--;
    }
}