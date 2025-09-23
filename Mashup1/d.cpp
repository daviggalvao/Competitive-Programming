#include <bits/stdc++.h>
using namespace std;

//vlad = inicio / dima = final

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,len;
        string start,tmp,order;
        cin >> a;
        cin >> start;
        cin >> len;
        cin >> tmp;
        cin >> order;
        for(int i=0; i<len; i++){
            if(order[i]=='D'){
                start.insert(start.end(), tmp[i]);
            }
            else{
                start.insert(start.begin(), tmp[i]);
            }
        }
        cout << start << '\n';
    }
}