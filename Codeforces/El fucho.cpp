#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int count=0;
        stack<int> win, loss;
        for(int i=0; i<n; i++) win.push(i);
        while(1){
            if(win.size()>1){
                if(win.size()%2==0){
                    for(int i=0, s=(win.size()/2); i<s; i++){
                        int tmp = win.top();
                        win.pop();
                        loss.push(tmp);
                        count++;
                    }
                }
                else{
                    for(int i=0, s=((win.size()-1)/2); i<s; i++){
                        int tmp = win.top();
                        win.pop();
                        loss.push(tmp);
                        count++;
                    }
                }
            }
            if(loss.size()>1){
                if(loss.size()%2==0){
                    for(int i=0, s=(loss.size()/2); i<s; i++){
                        loss.pop();
                        count++;
                    }
                }
                else{
                    for(int i=0, s=((loss.size()-1)/2); i<s; i++){
                        loss.pop();
                        count++;
                    }
                }
            }
            if(win.size()==1 && loss.size()==1){
                count++;
                break;
            }
        }
        cout << count << '\n';
    }
}