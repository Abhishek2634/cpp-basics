# include <bits/stdc++.h>
using namespace std;

int main(){
     int m = 0;
    while(true){
        int a,b;
        cin >> a >> b;
        if(a <= 0 || b <= 0 )break;
        int sum = 0;
 
        if(a > b){
              if(m != 0) cout << endl;
              m++;
            for(int i = b;i <= a;i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" <<sum;
        }else{
               if(m != 0) cout << endl;
               m++;
            for(int i = a;i <= b;i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" <<sum;
        }
    }
    return 0;
}