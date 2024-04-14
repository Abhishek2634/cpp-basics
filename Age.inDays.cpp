#include <bits/stdc++.h>
using namespace std;
int main(){
        int a;
        cin >> a;
        int years = a / 365;
        int months = (a % 365)/30;
        int days = (a % 365) % 30;
        cout << years << " years" << endl;
        cout << months << " months" << endl;
        cout << days << " days" << endl;
    }
