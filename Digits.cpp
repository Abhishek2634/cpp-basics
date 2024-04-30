#include <iostream> 
using namespace std; 

int main(){
    int a;
    cin >> a;
    while(a-- > 0){
        // int m;
        // cin >> m;
        // while(m > 0){
        //     int x = m % 10;
        //     cout << x << " ";
        //     m /= 10;
        // }
        // cout << endl;

       
            string str ;
            cin >> str;
            for(int i = str.length()-1;i >=0;i--){
                cout << str[i] << " ";
            }
            cout << endl;
    }
}