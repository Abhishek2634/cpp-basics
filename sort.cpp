# include <bits/stdc++.h>
using namespace std;
int main(){
    //array
    int arr[4] = {1,0,8,2};
    sort(arr,arr+3);
    for(int i = 0; i < sizeof(arr)/sizeof(int);i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
    vector <int> v = {4,5,2,8,1};
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << '\n';
    
    string m ;
    m = "hello world";
    sort(m.begin(),m.end());
    cout << m;

}