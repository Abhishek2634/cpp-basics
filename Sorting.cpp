#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c ;
    int x,y,z;
    x = a,y = b,z = c;

    if(a > b){
        swap(a,b);
    }
    if(b > c){
        swap(b,c);
        if(a > b){
            swap(a,b);
        }
    }
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << endl ;
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";







}