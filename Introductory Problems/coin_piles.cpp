#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b;
    cin >> a >> b;
    if(max(a,b) <= 2 * min(a,b) && (a+b) % 3 ==0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
