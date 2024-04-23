#include<bits/stdc++.h>
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
int main(){
    FAST;
    int a;
    cin >> a;
    int rev = 0;
    int y = a;
    while(y > 0){
        rev = rev * 10 + y % 10;
        y /= 10;
    }
    if(a == rev){
        cout << rev << endl;
        cout << "YES" << endl;
    }else{
        cout << rev << endl;
        cout << "NO" << endl;
            
        }
 }
