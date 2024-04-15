# include <bits/stdc++.h>
using namespace std;
int main(){
    int a ;
    int b ;
    cin >> a >> b;
    double m =  (double) a/b;
    cout << "floor " << a << " / " << b << " = " << floor(m) << '\n' ;
    cout << "ceil " << a << " / " << b << " = " << ceil(m)   << '\n';
    cout << "round " << a << " / " << b <<  " = " <<round(m)  <<'\n' ;
}