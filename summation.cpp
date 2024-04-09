// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string  a,b;
    cin >> a >> b;

    // method 1;
    // int c = a % 10;
    // int d = b % 10;
    // cout << c + d;

    // another method;
       int x = a[a.size()-1] - '0' , y = b[b.size()-1] - '0';
       cout << x + y << endl;
}