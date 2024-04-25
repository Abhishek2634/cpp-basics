#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    cin >> m >> n;
    while(m != n){
        if(m > n)m -= n;
        else n-=m;
    }
    cout << n;
}