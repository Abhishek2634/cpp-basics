#include<bits/stdc++.h>
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
int main(){
    FAST;
    int a;
    cin >> a;
    for(int i = 0; i < a;i++){
        for(int j = i; j < a;j++){
            cout << "*";
        }
        cout << '\n';
    }
}