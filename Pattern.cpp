# include <bits/stdc++.h>
using namespace std;
void another();
int main(){
    int m;
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5-i;j ++){
            cout << "*";
        }
        for(int j = 0 ; j < i ;j++){
            cout << "#";
        }
        cout << endl;

    }
    another();
}
void another(){
    for(int i = 1; i <= 4;i++){
        for(int j = 4;j > i;j--){
            cout << " ";
        }
        for(int j = 1; j < i;j++){
            cout << j ;
        }
      for(int j = i ; j >= 1;j--){
        cout << j;
      }
      cout << endl;
    }
}