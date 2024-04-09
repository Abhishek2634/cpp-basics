#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin >> x >> y;
    if(x % y == 0){
        cout << "x is a multiple of y";
    }else{
        cout << "not a multiple";
    }
}