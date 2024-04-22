#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  cin >> a;
  while(a-- > 0){
    int b;
    cin >> b;
    long long fact = 1;
    if(b == 0){
        cout << 1 << endl;
        continue;
    }
    while(b > 0){
        fact *= b--;
    }
    cout << fact << endl;
  }
}