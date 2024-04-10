#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {2,2,3,4,5,6,2,1};
    cout << a[0] << endl;
    for(auto i : a){
        cout << i << " " ;
    }
    cout << '\n';
    
    int n;
    cin >> n;
    int m [n];
    for(int i = 0; i < n;i++){
        cin >> m[i];
    }
    for(auto i : m){
        cout << i << endl;
    }
}
