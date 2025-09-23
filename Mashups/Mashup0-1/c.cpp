#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    if(s.size()>1){
        int checkTodas = 1;
        int checkPrimeira = 1;
        for(int i=0; i<s.size(); i++){
            if(i==0){
                if(islower(s[i])){
                    checkTodas=0;
                }
            }
            else{
                if(islower(s[i])){
                    checkPrimeira=0;
                    checkTodas=0;
                }
            }
            if(checkPrimeira==0 && checkTodas==0){
                break;
            }
        }
        if(checkTodas){
            for(int i=0; i<s.size(); i++){
                s[i] += 32;
            }
        }
        else if(checkPrimeira){
            s[0] -= 32;
            for(int i=1; i<s.size(); i++){
                s[i] += 32;
            }
        }
        cout << s << endl;
    }
    else{
        if(islower(s[0])){
            s[0] -= 32;
            cout << s << endl;
        }
        else{
            s[0] += 32;
            cout << s << endl;
        }
    }
}   
