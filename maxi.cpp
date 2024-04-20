#include<bits/stdc++.h>
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
int main(){
   int a;
   cin >> a ;
   int maxi = -1;
   for(int i = 0; i < a;i++){
        int b;
        cin >> b;
        maxi = max(maxi,b);
   }
   cout << maxi;

} 