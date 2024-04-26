#include<bits/stdc++.h>
using namespace std;
bool check(int i);
int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i = a;i <= b;i++){
        if (check(i)){
            ans ++;
            cout << i << " ";
        }
    }
    if(ans == 0) cout << -1;
}
bool check(int i){
    while(i > 0){
        int m = i % 10;
        if(m != 4 && m != 7) return false;
        i /= 10;
    }
    return true;
}