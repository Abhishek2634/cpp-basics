# include <bits/stdc++.h>

using namespace std;

int main(){
    int m ;
    cin >> m;
    int arr[m];
    arr[0]  = 0;
    arr[1] = 1;
    if(m == 1){
        cout << arr[0];
    }else if (m == 2){
        cout << arr[0] << " " << arr[1] ; 
    }else{
        cout << arr[0] << " " << arr[1]<< " " ; 
    }
    for(int i = 2; i < m;i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] << " ";
    }
    
}