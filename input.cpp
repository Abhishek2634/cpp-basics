# include <iostream>
using namespace std;
int main(){
    // taking int as input  
    // int a,b,c;
    // cin >> a >> b >> c;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // string  input 
    // string m;
    // cin >> m;
    // cout << m << endl;

    // string line input
    // string k ;
    // getline(cin,k);
    // cout << k << endl;


    // conditional statements
    bool isTrue ;
    int age  ;
    cin >> age >> isTrue;
    
    if(age > 30){
        cout << "well done" << endl;
    }else if (isTrue){
        cout << "okay" << endl;
    }else {
        cout << "nothing" << endl;
    }


}