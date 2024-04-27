#include<bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a;i++){
        for(int j = 0;j <= i;j++){
            cout << "*";
        }
        cout << '\n';
    }
}