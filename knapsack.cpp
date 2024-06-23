# include <bits/stdc++.h>
#define  upperString(s) for(auto& a : s) a =  (char) toupper(a)
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
void solve(int cur,int n,int m,int wt[],int vl[],int &ans,int ok){
    if(cur == n || m == 0){
        ans = max(ans,ok);
        return;
    }
    if(m >= wt[cur]){
        solve(cur+1,n,m-wt[cur],wt,vl,ans,ok+vl[cur]);
    }
    solve(cur+1,n,m,wt,vl,ans,ok);
}
int main(){
    int n,m;
    cin >> n >> m;
    int wt[n];
    int vl[n];
    for(int i = 0;i < n;i++){
        cin >> wt[i];
        cin >> vl[i];
    }
    int ans = INT_MIN;
    solve(0,n,m,wt,vl,ans,0);
    cout << ans;
    
}