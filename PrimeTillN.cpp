# include <bits/stdc++.h>
using namespace std;
bool check(int i);
int main(){
    int n;
    cin >> n;
    for(int i = 2;i <= n;i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}
bool check(int m){
    for(int i = 2;i <= sqrt(m);i++){
        if(m % i == 0){
            return false;
        }
    }
    return true;
}